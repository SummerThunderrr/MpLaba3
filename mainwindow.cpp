#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyStack.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    stack = new MyStack<int>(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    stack->push(ui->spinBox->value());
}

void MainWindow::on_pushButton_2_clicked()
{
    qDebug()<<stack->pop();
}

void MainWindow::on_pushButton_3_clicked()
{
    stack->printStack();
}

void MainWindow::on_pushButton_4_clicked()
{
    stack->peek();
}
