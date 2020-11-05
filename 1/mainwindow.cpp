#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(500, 500);
    auto timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(animate()));
    timer->start(5);
}

void MainWindow::animate() {
    repaint();
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    QFont font ("Tokyo");
    painter.setFont(font);
    painter.save();

    painter.translate(20, 350);
    painter.rotate(-90);
    painter.drawText(0, 0, QString::fromStdString("Графические примитивы в библиотеке QT"));

    painter.restore();

    QRect rect1(20 + offset, 20 + offset, 20, 20);
    QRect rect2(40 + offset, 40 + offset, 20, 20);

    if(!moveDown){
        offset--;
        if (offset == -20){
            moveDown = true;
        }
    }
    else {
        offset++;
        if (offset == 500 - 40 - 20){
            moveDown = false;
        }
    }

    painter.setPen(QPen(Qt::cyan, 5));
    painter.drawRect(rect1);
    painter.setPen(QPen(Qt::red, 5));
    painter.drawRect(rect2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

