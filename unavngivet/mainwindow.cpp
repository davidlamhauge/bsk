#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

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
    if (!ui->leTal1->text().toInt() || !ui->lineEdit_2->text().toInt())
    {
        QMessageBox::information(this,
                                 "Ugyldigt input",
                                 "Du skal indtaste hele tal!",
                                 QMessageBox::Ok);
        udskrivResultat("Forkert Indtastning!!!");
        return;
    }
    int tal1 = ui->leTal1->text().toInt();
    int tal2 = ui->lineEdit_2->text().toInt();
    plus(tal1, tal2);
}

void MainWindow::plus(int tal1, int tal2)
{
    int result = tal1 + tal2;
    QString res = QString::number(result);
    udskrivResultat(res);
}

void MainWindow::udskrivResultat(QString resultat)
{
    ui->labPrintResultat->setText(resultat);
}

void MainWindow::afslut()
{
    close();
}

