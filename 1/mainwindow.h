#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void animate();

private:
    Ui::MainWindow *ui;
    int offset = 0;
    bool moveDown = true;
protected:
    void paintEvent(QPaintEvent *event) override;
};
#endif // MAINWINDOW_H
