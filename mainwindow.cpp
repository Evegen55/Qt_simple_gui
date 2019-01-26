#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "sysinfo.h"

#include <QPushButton>
#include <QPropertyAnimation>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow()),
    mCpuWidget(this),
    memoryWidget(this)
{
    ui->setupUi(this);
    SysInfo::instance().init();
    ui->centralWidget->layout()->addWidget(&mCpuWidget);
    ui->centralWidget->layout()->addWidget(&memoryWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}
