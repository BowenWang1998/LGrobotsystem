#ifndef QRVIZ_HPP
#define QRVIZ_HPP

#include <QObject>
#include<ros/ros.h>
#include<rviz/visualization_manager.h>
#include<rviz/render_panel.h>
#include<rviz/display.h>
#include<rviz/tool_manager.h>
#include<rviz/view_controller.h>
#include<rviz/view_manager.h>
#include<rviz/default_plugin/view_controllers/orbit_view_controller.h>
#include<rviz/tool.h>
#include<QVBoxLayout>
class qrviz: public QWidget
{
  Q_OBJECT
public:
  qrviz(QWidget *parent=nullptr);
private:
  rviz::RenderPanel* render_panel_;
  rviz::VisualizationManager* manager_;
  rviz::Display* imu_display_;
  rviz::ToolManager* tool_manager_;
  void loadRvizConfig(const QString& configFilePath);
};

#endif // QRVIZ_HPP
