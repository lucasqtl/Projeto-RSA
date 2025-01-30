/********************************************************************************
** Form generated from reading UI file 'creditos.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOS_H
#define UI_CREDITOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_creditos
{
public:
    QLabel *titulo;
    QLabel *titulo_2;
    QLabel *titulo_3;

    void setupUi(QDialog *creditos)
    {
        if (creditos->objectName().isEmpty())
            creditos->setObjectName("creditos");
        creditos->resize(500, 350);
        creditos->setMaximumSize(QSize(500, 400));
        creditos->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        titulo = new QLabel(creditos);
        titulo->setObjectName("titulo");
        titulo->setGeometry(QRect(30, 70, 441, 201));
        titulo->setStyleSheet(QString::fromUtf8("font: 15pt \"Nimbus Sans [UKWN]\";\n"
"border: 2px solid white;"));
        titulo->setAlignment(Qt::AlignCenter);
        titulo_2 = new QLabel(creditos);
        titulo_2->setObjectName("titulo_2");
        titulo_2->setGeometry(QRect(80, 10, 341, 41));
        titulo_2->setStyleSheet(QString::fromUtf8("font: 15pt \"Nimbus Sans [UKWN]\";\n"
"border: 2px solid white;"));
        titulo_2->setAlignment(Qt::AlignCenter);
        titulo_3 = new QLabel(creditos);
        titulo_3->setObjectName("titulo_3");
        titulo_3->setGeometry(QRect(70, 290, 341, 41));
        titulo_3->setStyleSheet(QString::fromUtf8("font: 15pt \"Nimbus Sans [UKWN]\";\n"
"border: 2px solid white;"));
        titulo_3->setAlignment(Qt::AlignCenter);

        retranslateUi(creditos);

        QMetaObject::connectSlotsByName(creditos);
    } // setupUi

    void retranslateUi(QDialog *creditos)
    {
        creditos->setWindowTitle(QCoreApplication::translate("creditos", "Cr\303\251ditos", nullptr));
        titulo->setText(QCoreApplication::translate("creditos", "* Ant\303\264nio Rodrigo Lima de Andrade Ten\303\263rio\n"
"* Edilberto Martins\n"
"* Emanuele Vitoria de Jesus Lima\n"
"* Fl\303\241vio Jos\303\251 da Silva Moura\n"
"* Jos\303\251 Lucas de Oliveira Quintela\n"
"* Luiz Miguel de Melo Bomfim", nullptr));
        titulo_2->setText(QCoreApplication::translate("creditos", "INTEGRANTES", nullptr));
        titulo_3->setText(QCoreApplication::translate("creditos", "Professor - Bruno Pimentel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creditos: public Ui_creditos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOS_H
