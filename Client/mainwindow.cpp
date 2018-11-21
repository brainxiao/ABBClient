#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QMessageBox>
#include <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_IP_triggered()
{
    bool ok;
    QString string = QInputDialog::getText(this,tr("修改IP"),
                                           tr("请输入IP"),QLineEdit::Normal,tr("192.168.1.1"),&ok);
    if(ok)
        QMessageBox::information(this,tr("提示"),
                                 tr("修改IP成功！！！"),QMessageBox::Ok);
}
