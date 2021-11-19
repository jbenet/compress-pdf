#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QProcess>
#include<QDebug>
#include"dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,
    tr("Open Pdf"), "/home/tim/learning/compress-pdf/", tr("text Files (*.pdf)"));
    QProcess myprocess(this);
    QString program="compress-pdf";
    QStringList arg;
    arg<<fileName;
    myprocess.start(program,arg);
    myprocess.waitForFinished(-1);
    dialog.show();
}
