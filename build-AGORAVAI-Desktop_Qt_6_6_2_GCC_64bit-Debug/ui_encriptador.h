/********************************************************************************
** Form generated from reading UI file 'encriptador.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRIPTADOR_H
#define UI_ENCRIPTADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_encriptador
{
public:
    QLabel *n;
    QPushButton *continuar;
    QLineEdit *lineEdit;
    QLabel *e;
    QLineEdit *lineEdit_2;
    QLabel *titulo;
    QTextEdit *textEdit;

    void setupUi(QDialog *encriptador)
    {
        if (encriptador->objectName().isEmpty())
            encriptador->setObjectName("encriptador");
        encriptador->resize(500, 300);
        encriptador->setMaximumSize(QSize(500, 350));
        encriptador->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        n = new QLabel(encriptador);
        n->setObjectName("n");
        n->setGeometry(QRect(40, 250, 16, 21));
        n->setStyleSheet(QString::fromUtf8("font: 700 14pt \"DejaVu Sans\";"));
        continuar = new QPushButton(encriptador);
        continuar->setObjectName("continuar");
        continuar->setGeometry(QRect(370, 240, 101, 31));
        continuar->setStyleSheet(QString::fromUtf8("font: 10pt \"Nimbus Sans [UKWN]\";\n"
"background-color: rgb(47, 47, 47);\n"
"border: 2px solid white;"));
        lineEdit = new QLineEdit(encriptador);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 250, 121, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        e = new QLabel(encriptador);
        e->setObjectName("e");
        e->setGeometry(QRect(200, 250, 16, 21));
        e->setStyleSheet(QString::fromUtf8("font: 700 14pt \"DejaVu Sans\";"));
        lineEdit_2 = new QLineEdit(encriptador);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(220, 250, 121, 21));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        titulo = new QLabel(encriptador);
        titulo->setObjectName("titulo");
        titulo->setGeometry(QRect(50, 10, 401, 41));
        titulo->setStyleSheet(QString::fromUtf8("font: 13pt \"Nimbus Sans [UKWN]\";\n"
"border: 2px solid white;"));
        titulo->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(encriptador);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 70, 461, 151));
        textEdit->setStyleSheet(QString::fromUtf8("font: 10pt \"Nimbus Sans [UKWN]\";\n"
"border: 1px solid white;"));

        retranslateUi(encriptador);

        QMetaObject::connectSlotsByName(encriptador);
    } // setupUi

    void retranslateUi(QDialog *encriptador)
    {
        encriptador->setWindowTitle(QCoreApplication::translate("encriptador", "Criptografar", nullptr));
        n->setText(QCoreApplication::translate("encriptador", "n", nullptr));
        continuar->setText(QCoreApplication::translate("encriptador", " CONTINUAR", nullptr));
        e->setText(QCoreApplication::translate("encriptador", "e", nullptr));
        titulo->setText(QCoreApplication::translate("encriptador", "DIGITE O TEXTO PARA SER CRIPTOGRAFADO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class encriptador: public Ui_encriptador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRIPTADOR_H
