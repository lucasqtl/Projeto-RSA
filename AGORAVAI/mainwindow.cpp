#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label2->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    for(int i = 0; i <= 100000; i++){
        ui->progressBar->setValue(i);

        ui->label->hide();
        ui->label2->show();
    }
    menu newwindow;
    close();
    newwindow.exec();

}
