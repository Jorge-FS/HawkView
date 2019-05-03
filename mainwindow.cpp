#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSplashScreen>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   QWidget::showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}
