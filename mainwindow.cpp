#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "sysinfo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow()),
    mCpuWidget(this)
{
    ui->setupUi(this);
    SysInfo::instance().init();

//    this->setCentralWidget(&mCpuWidget);
    ui->centralWidget->layout()->addWidget(&mCpuWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}
