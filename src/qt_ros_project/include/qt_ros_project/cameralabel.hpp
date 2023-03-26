#ifndef CAMERALABEL_H
#define CAMERALABEL_H

#include <QLabel>
#include <QMouseEvent>

class CameraLabel : public QLabel
{
    Q_OBJECT
public:
    explicit CameraLabel(QWidget *parent = nullptr);
    void on_label_double_click();

protected:
    void mouseDoubleClickEvent(QMouseEvent *event) override;
   signals:
    void doubleClicked();
private:
    bool is_maximized;
    QRect original_geometry;
    QWidget* parentWid;
};

#endif // CAMERALABEL_H
