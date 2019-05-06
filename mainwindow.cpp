#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSplashScreen>
#include <opencv2/opencv.hpp>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   QWidget::showMaximized();
   cv::Mat img = cv::imread("/home/jorge/Descargas/hawkview.png");
   cv::imshow("ejemplo",img);
   cvtColor(img, img, CV_BGR2RGB);
   //ui->imagen_lbl->setPixmap(QPixmap::fromImage(QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888)));

}

MainWindow::~MainWindow()
{
    delete ui;
}
