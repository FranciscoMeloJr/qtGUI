#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <iostream>

bool kernel = false;
bool cpu_tracing = false;
bool instructions = false;
bool cache = false;
bool page = false;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

//Main Window:
MainWindow::~MainWindow()
{
    delete ui;
}

//Push Bottoom
void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Hello");
    int status = system("./DisplayImage ./obama.jpg");
    std::cout << status;
}

void MainWindow::on_pushButton_2_clicked()
{
    int status = system("./DisplayImage ./obama.jpg");
    std::cout << status;
}


//Setting the tracing:
void MainWindow::on_pushButton_5_clicked()
{
    int status;
    if(kernel){
        status = system("./TracingK.sh");
        std::cout << status;
    }
    else{
        status = system("./TracingU.sh");
        std::cout << status;
    }

    QString string = QString::number(status);
    ui->label_3->setText(string);
}
void MainWindow::on_radioButton_clicked()
{
    kernel = true;
}

void MainWindow::on_radioButton_released()
{
    kernel = false;
}

void MainWindow::on_radioButton_2_clicked()
{
    on_radioButton_released();
}


void MainWindow::on_checkBox_cpu_clicked()
{
    cpu_tracing = true;
}

void MainWindow::on_checkBox_inst_clicked()
{
    instructions = true;
}

void MainWindow::on_checkBox_cm_clicked()
{
    cache = true;
}

void MainWindow::on_checkBox_pf_clicked()
{
    page = true;
}
