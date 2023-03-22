/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QTabWidget *tab_manager;
    QWidget *tab;
    QGroupBox *groupBox;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *page_5;
    QWidget *page_4;
    QLabel *cam_label1;
    QLabel *cam_label4;
    QLabel *cam_label3;
    QLabel *cam_label2;
    QWidget *tab_status;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout;
    QListView *view_logging;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QDockWidget *dock_status_2;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *line_edit_master1;
    QLabel *label_5;
    QLineEdit *line_edit_host1;
    QLabel *label_6;
    QLineEdit *line_edit_topic1;
    QCheckBox *checkbox_use_environment1;
    QCheckBox *checkbox_remember_settings1;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *button_connect1;
    QSpacerItem *verticalSpacer_4;
    QPushButton *quit_button1;
    QWidget *tab_4;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QStringLiteral("MainWindowDesign"));
        MainWindowDesign->resize(1195, 768);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QStringLiteral("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QStringLiteral("tab_manager"));
        tab_manager->setMinimumSize(QSize(100, 0));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 1171, 541));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(700, 160, 451, 351));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        stackedWidget->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackedWidget->addWidget(page_4);
        cam_label1 = new QLabel(groupBox);
        cam_label1->setObjectName(QStringLiteral("cam_label1"));
        cam_label1->setGeometry(QRect(0, 80, 200, 200));
        cam_label1->setMinimumSize(QSize(200, 200));
        cam_label1->setStyleSheet(QLatin1String("border:1px solid black\n"
""));
        cam_label4 = new QLabel(groupBox);
        cam_label4->setObjectName(QStringLiteral("cam_label4"));
        cam_label4->setGeometry(QRect(280, 310, 200, 200));
        cam_label4->setMinimumSize(QSize(200, 200));
        cam_label4->setStyleSheet(QLatin1String("border:1px solid black\n"
""));
        cam_label3 = new QLabel(groupBox);
        cam_label3->setObjectName(QStringLiteral("cam_label3"));
        cam_label3->setGeometry(QRect(10, 320, 200, 200));
        cam_label3->setMinimumSize(QSize(200, 200));
        cam_label3->setStyleSheet(QLatin1String("border:1px solid black\n"
""));
        cam_label2 = new QLabel(groupBox);
        cam_label2->setObjectName(QStringLiteral("cam_label2"));
        cam_label2->setGeometry(QRect(270, 90, 200, 200));
        cam_label2->setMinimumSize(QSize(200, 200));
        cam_label2->setStyleSheet(QLatin1String("border:1px solid black\n"
""));
        tab_manager->addTab(tab, QString());
        tab_status = new QWidget();
        tab_status->setObjectName(QStringLiteral("tab_status"));
        groupBox_12 = new QGroupBox(tab_status);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(10, 80, 280, 236));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox_12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        view_logging = new QListView(groupBox_12);
        view_logging->setObjectName(QStringLiteral("view_logging"));

        gridLayout->addWidget(view_logging, 0, 0, 1, 1);

        tabWidget = new QTabWidget(tab_status);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(300, 40, 471, 481));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        dock_status_2 = new QDockWidget(tab_3);
        dock_status_2->setObjectName(QStringLiteral("dock_status_2"));
        dock_status_2->setGeometry(QRect(0, 0, 471, 601));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dock_status_2->sizePolicy().hasHeightForWidth());
        dock_status_2->setSizePolicy(sizePolicy2);
        dock_status_2->setMinimumSize(QSize(325, 389));
        dock_status_2->setAllowedAreas(Qt::RightDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        frame_2 = new QFrame(dockWidgetContents_3);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        line_edit_master1 = new QLineEdit(groupBox_2);
        line_edit_master1->setObjectName(QStringLiteral("line_edit_master1"));

        gridLayout_2->addWidget(line_edit_master1, 1, 0, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFrameShape(QFrame::StyledPanel);
        label_5->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        line_edit_host1 = new QLineEdit(groupBox_2);
        line_edit_host1->setObjectName(QStringLiteral("line_edit_host1"));

        gridLayout_2->addWidget(line_edit_host1, 3, 0, 1, 2);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFrameShape(QFrame::StyledPanel);
        label_6->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        line_edit_topic1 = new QLineEdit(groupBox_2);
        line_edit_topic1->setObjectName(QStringLiteral("line_edit_topic1"));
        line_edit_topic1->setEnabled(false);

        gridLayout_2->addWidget(line_edit_topic1, 5, 0, 1, 2);

        checkbox_use_environment1 = new QCheckBox(groupBox_2);
        checkbox_use_environment1->setObjectName(QStringLiteral("checkbox_use_environment1"));
        checkbox_use_environment1->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(checkbox_use_environment1, 6, 0, 1, 2);

        checkbox_remember_settings1 = new QCheckBox(groupBox_2);
        checkbox_remember_settings1->setObjectName(QStringLiteral("checkbox_remember_settings1"));
        checkbox_remember_settings1->setLayoutDirection(Qt::RightToLeft);

        gridLayout_2->addWidget(checkbox_remember_settings1, 7, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(170, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 8, 0, 1, 1);

        button_connect1 = new QPushButton(groupBox_2);
        button_connect1->setObjectName(QStringLiteral("button_connect1"));
        button_connect1->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(button_connect1->sizePolicy().hasHeightForWidth());
        button_connect1->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(button_connect1, 8, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_2);

        verticalSpacer_4 = new QSpacerItem(20, 233, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        verticalLayout_4->addWidget(frame_2);

        quit_button1 = new QPushButton(dockWidgetContents_3);
        quit_button1->setObjectName(QStringLiteral("quit_button1"));
        sizePolicy3.setHeightForWidth(quit_button1->sizePolicy().hasHeightForWidth());
        quit_button1->setSizePolicy(sizePolicy3);

        verticalLayout_4->addWidget(quit_button1);

        dock_status_2->setWidget(dockWidgetContents_3);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_manager->addTab(tab_status, QString());

        hboxLayout->addWidget(tab_manager);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1195, 28));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "Cam Group", Q_NULLPTR));
        cam_label1->setText(QApplication::translate("MainWindowDesign", "                     Cam1", Q_NULLPTR));
        cam_label4->setText(QApplication::translate("MainWindowDesign", "                     Cam4", Q_NULLPTR));
        cam_label3->setText(QApplication::translate("MainWindowDesign", "                     Cam3", Q_NULLPTR));
        cam_label2->setText(QApplication::translate("MainWindowDesign", "                       Cam2", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab), QApplication::translate("MainWindowDesign", "\350\201\224\345\220\210\344\270\212\344\275\215\346\234\272", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindowDesign", "Logging", Q_NULLPTR));
        dock_status_2->setWindowTitle(QApplication::translate("MainWindowDesign", "Command Panel", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "Ros Master", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindowDesign", "Ros Master Url", Q_NULLPTR));
        line_edit_master1->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindowDesign", "Ros IP", Q_NULLPTR));
        line_edit_host1->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", Q_NULLPTR));
        line_edit_topic1->setText(QApplication::translate("MainWindowDesign", "unused", Q_NULLPTR));
        checkbox_use_environment1->setText(QApplication::translate("MainWindowDesign", "Use environment variables", Q_NULLPTR));
        checkbox_remember_settings1->setText(QApplication::translate("MainWindowDesign", "Remember settings on startup", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_connect1->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect1->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        button_connect1->setText(QApplication::translate("MainWindowDesign", "Connect", Q_NULLPTR));
        quit_button1->setText(QApplication::translate("MainWindowDesign", "Quit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindowDesign", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindowDesign", "Tab 2", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "Ros Communications", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
