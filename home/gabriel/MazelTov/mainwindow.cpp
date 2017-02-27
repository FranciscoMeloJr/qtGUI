#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <stdlib.h>

bool kernel = false;
bool cpu_tracing = false;
bool instructions = false;
bool page = false;

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

void MainWindow::on_pushButton_clicked()
{
    int status = system("./bash1.sh");
    std::cout << status;

}

void MainWindow::on_pushButton_2_clicked()
{
    int status = system("./bash2.sh");
    std::cout << status;
}

void MainWindow::on_pushButton_3_clicked()
{
    int status = system("./bash3.sh");
    std::cout << status;
}


void MainWindow::on_pushButton_27_clicked()
{
    int status = system("./bash4.sh");
    std::cout << status;
}
