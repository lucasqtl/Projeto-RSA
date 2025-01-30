/********************************************************************************
** Form generated from reading UI file 'desencriptar.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESENCRIPTAR_H
#define UI_DESENCRIPTAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_desencriptar
{
public:
    QLabel *titulo;
    QLineEdit *lineEdit;
    QPushButton *continuar;
    QLabel *e;
    QLineEdit *lineEdit_2;
    QLabel *n;
    QLabel *label;
    QLabel *e_2;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *desencriptar)
    {
        if (desencriptar->objectName().isEmpty())
            desencriptar->setObjectName("desencriptar");
        desencriptar->resize(500, 300);
        desencriptar->setMaximumSize(QSize(500, 300));
        desencriptar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        titulo = new QLabel(desencriptar);
        titulo->setObjectName("titulo");
        titulo->setGeometry(QRect(40, 10, 421, 41));
        titulo->setStyleSheet(QString::fromUtf8("font: 13pt \"Nimbus Sans [UKWN]\";\n"
"border: 2px solid white;"));
        titulo->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(desencriptar);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 60, 121, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        continuar = new QPushButton(desencriptar);
        continuar->setObjectName("continuar");
        continuar->setGeometry(QRect(190, 180, 101, 31));
        continuar->setStyleSheet(QString::fromUtf8("font: 10pt \"Nimbus Sans [UKWN]\";\n"
"background-color: rgb(47, 47, 47);\n"
"border: 2px solid white;"));
        e = new QLabel(desencriptar);
        e->setObjectName("e");
        e->setGeometry(QRect(160, 100, 16, 21));
        e->setStyleSheet(QString::fromUtf8("font: 700 14pt \"DejaVu Sans\";"));
        lineEdit_2 = new QLineEdit(desencriptar);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(180, 100, 121, 21));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        n = new QLabel(desencriptar);
        n->setObjectName("n");
        n->setGeometry(QRect(160, 60, 16, 21));
        n->setStyleSheet(QString::fromUtf8("font: 700 14pt \"DejaVu Sans\";"));
        label = new QLabel(desencriptar);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 230, 421, 31));
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"Nimbus Sans [UKWN]\";\n"
""));
        label->setAlignment(Qt::AlignCenter);
        e_2 = new QLabel(desencriptar);
        e_2->setObjectName("e_2");
        e_2->setGeometry(QRect(160, 140, 16, 21));
        e_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"DejaVu Sans\";"));
        lineEdit_3 = new QLineEdit(desencriptar);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(180, 140, 121, 21));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));

        retranslateUi(desencriptar);

        QMetaObject::connectSlotsByName(desencriptar);
    } // setupUi

    void retranslateUi(QDialog *desencriptar)
    {
        desencriptar->setWindowTitle(QCoreApplication::translate("desencriptar", "Desencriptar", nullptr));
        titulo->setText(QCoreApplication::translate("desencriptar", "DIGITE AS CHAVES PARA DESCRIPTOGRAFAR", nullptr));
        continuar->setText(QCoreApplication::translate("desencriptar", " CONTINUAR", nullptr));
        e->setText(QCoreApplication::translate("desencriptar", "q", nullptr));
        n->setText(QCoreApplication::translate("desencriptar", "p", nullptr));
        label->setText(QString());
        e_2->setText(QCoreApplication::translate("desencriptar", "e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class desencriptar: public Ui_desencriptar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESENCRIPTAR_H
