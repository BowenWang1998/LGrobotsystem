#include "../include/qt_ros_project/qrviz.hpp"

#include <rviz/yaml_config_reader.h>
#include <rviz/config.h>
#include <QFile>
#include <QTextStream>

qrviz::qrviz(QWidget* parent) : QWidget(parent)
{
  setMouseTracking(true);
  render_panel_ = new rviz::RenderPanel();
  manager_=new rviz::VisualizationManager(render_panel_);
  render_panel_->initialize(manager_->getSceneManager(),manager_);
  render_panel_->installEventFilter(this);

  manager_->initialize();
  manager_->startUpdate();
  manager_->removeAllDisplays();
  manager_->setFixedFrame("/base_footprint");
  //add module
  imu_display_ = manager_->createDisplay("rviz/RobotModel","RobotModel",true);

  if (imu_display_) {
    imu_display_->subProp("Robot Description")->setValue("robot_description");
    imu_display_->subProp("Update Interval")->setValue(0);
    imu_display_->subProp("Visual Enabled")->setValue(true);
    imu_display_->subProp("Collision Enabled")->setValue(false);
    imu_display_->subProp("Alpha")->setValue(0.5);
//    imu_display_->subProp("Scale")->setValue(QVariant(5));
    // 设置模型缩放比例
  }

  rviz::Display* grid_display =manager_->createDisplay("rviz/Grid","Grid",true);
  grid_display->subProp("Cell Size")->setValue(1.0);
  grid_display->subProp("Plane Cell Count")->setValue(5);
  rviz::ViewController* view_controller = manager_->getViewManager()->getCurrent();
  view_controller->subProp("Distance")->setValue(0.1);
  // 初始化 tool_manager_
  tool_manager_ = manager_->getToolManager();
  // 添加 MoveCamera 和 FocusCamera 工具
  auto move_camera_tool = tool_manager_->addTool("rviz/MoveCamera");
  tool_manager_->addTool("rviz/FocusCamera");
  // 设置当前工具为 MoveCamera
  tool_manager_->setCurrentTool(move_camera_tool);
  // 加载 RViz 配置
  QString config_file_path = "home/pc/catkin_ws/src/my_robot/rviz/spraygan3.rviz";
//  loadRvizConfig(config_file_path);
  render_panel_->setFocus();

  QVBoxLayout *main_layout = new QVBoxLayout;
  main_layout->addWidget(render_panel_,1);
  setLayout(main_layout);
}
bool qrviz::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == render_panel_ && event->type() == QEvent::MouseButtonDblClick)
    {
        // 发出 doubleClicked 信号
        emit doubleClicked();
        return true;
    }
    return QObject::eventFilter(obj, event);
}


