#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnLuk, &QPushButton::clicked, this, &MainWindow::afslut);
    connect(ui->BtnPlus, &QPushButton::clicked, this, &MainWindow::kontrollerPlus);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::kontrollerPlus()
{
    int tal1 = ui->leTal1->text().toInt();
    int tal2 = ui->lineEdit_2->text().toInt();
    plus(tal1, tal2);
}

void MainWindow::plus(int tal1, int tal2)
{
    int result = tal1 + tal2;
    QString res = QString::number(result);
    ui->labPrintResultat->setText(res);
}

void MainWindow::afslut()
{
    close();
}

