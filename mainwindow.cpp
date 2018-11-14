#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "sysinfo.h"
//#include <QLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow()),
    mCpuWidget(this)
{
    ui->setupUi(this);
    SysInfo::instance().init();
    //    this->layout()->addWidget(&mCpuWidget);
    //    ui->centralWidget->layout()->addWidget(&mCpuWidget);
    this->setCentralWidget(&mCpuWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
