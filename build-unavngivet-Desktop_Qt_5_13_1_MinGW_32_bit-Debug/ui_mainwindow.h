/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labTal1;
    QLineEdit *leTal1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labTal2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *LabResultat;
    QLabel *labPrintResultat;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *BtnPlus;
    QPushButton *btnMinus;
    QPushButton *btnGange;
    QPushButton *btnDivider;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLuk;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(338, 202);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labTal1 = new QLabel(centralwidget);
        labTal1->setObjectName(QString::fromUtf8("labTal1"));

        horizontalLayout->addWidget(labTal1);

        leTal1 = new QLineEdit(centralwidget);
        leTal1->setObjectName(QString::fromUtf8("leTal1"));

        horizontalLayout->addWidget(leTal1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labTal2 = new QLabel(centralwidget);
        labTal2->setObjectName(QString::fromUtf8("labTal2"));

        horizontalLayout_2->addWidget(labTal2);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        LabResultat = new QLabel(centralwidget);
        LabResultat->setObjectName(QString::fromUtf8("LabResultat"));

        horizontalLayout_3->addWidget(LabResultat);

        labPrintResultat = new QLabel(centralwidget);
        labPrintResultat->setObjectName(QString::fromUtf8("labPrintResultat"));

        horizontalLayout_3->addWidget(labPrintResultat);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        BtnPlus = new QPushButton(centralwidget);
        BtnPlus->setObjectName(QString::fromUtf8("BtnPlus"));

        horizontalLayout_4->addWidget(BtnPlus);

        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName(QString::fromUtf8("btnMinus"));

        horizontalLayout_4->addWidget(btnMinus);

        btnGange = new QPushButton(centralwidget);
        btnGange->setObjectName(QString::fromUtf8("btnGange"));

        horizontalLayout_4->addWidget(btnGange);

        btnDivider = new QPushButton(centralwidget);
        btnDivider->setObjectName(QString::fromUtf8("btnDivider"));

        horizontalLayout_4->addWidget(btnDivider);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        btnLuk = new QPushButton(centralwidget);
        btnLuk->setObjectName(QString::fromUtf8("btnLuk"));

        horizontalLayout_5->addWidget(btnLuk);


        verticalLayout->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 338, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labTal1->setText(QCoreApplication::translate("MainWindow", "tal 1", nullptr));
        labTal2->setText(QCoreApplication::translate("MainWindow", "tal 2", nullptr));
        LabResultat->setText(QCoreApplication::translate("MainWindow", "Resultat", nullptr));
        labPrintResultat->setText(QString());
        BtnPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnGange->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btnDivider->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        btnLuk->setText(QCoreApplication::translate("MainWindow", "Luk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
