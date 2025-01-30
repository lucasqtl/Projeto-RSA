/********************************************************************************
** Form generated from reading UI file 'chavepublica.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAVEPUBLICA_H
#define UI_CHAVEPUBLICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chavepublica
{
public:
    QLabel *titulo;
    QPushButton *continuar;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *p;
    QLabel *q;
    QLabel *p_2;
    QLabel *p_3;

    void setupUi(QDialog *chavepublica)
    {
        if (chavepublica->objectName().isEmpty())
            chavepublica->setObjectName("chavepublica");
        chavepublica->resize(500, 300);
        chavepublica->setMaximumSize(QSize(500, 350));
        chavepublica->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        titulo = new QLabel(chavepublica);
        titulo->setObjectName("titulo");
        titulo->setGeometry(QRect(80, 10, 341, 41));
        titulo->setStyleSheet(QString::fromUtf8("font: 15pt \"Nimbus Sans [UKWN]\";\n"
"border: 2px solid white;"));
        titulo->setAlignment(Qt::AlignCenter);
        continuar = new QPushButton(chavepublica);
        continuar->setObjectName("continuar");
        continuar->setGeometry(QRect(190, 230, 101, 31));
        continuar->setStyleSheet(QString::fromUtf8("font: 10pt \"Nimbus Sans [UKWN]\";\n"
"background-color: rgb(47, 47, 47);\n"
"border: 2px solid white;"));
        lineEdit = new QLineEdit(chavepublica);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 120, 121, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        lineEdit_2 = new QLineEdit(chavepublica);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(180, 190, 121, 21));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        p = new QLabel(chavepublica);
        p->setObjectName("p");
        p->setGeometry(QRect(160, 120, 16, 21));
        p->setStyleSheet(QString::fromUtf8("font: 700 14pt \"DejaVu Sans\";"));
        q = new QLabel(chavepublica);
        q->setObjectName("q");
        q->setGeometry(QRect(160, 190, 16, 21));
        q->setStyleSheet(QString::fromUtf8("font: 700 14pt \"DejaVu Sans\";"));
        p_2 = new QLabel(chavepublica);
        p_2->setObjectName("p_2");
        p_2->setGeometry(QRect(140, 90, 251, 21));
        p_2->setStyleSheet(QString::fromUtf8("font: 700 10pt \"DejaVu Sans\";"));
        p_3 = new QLabel(chavepublica);
        p_3->setObjectName("p_3");
        p_3->setGeometry(QRect(140, 160, 251, 21));
        p_3->setStyleSheet(QString::fromUtf8("font: 700 10pt \"DejaVu Sans\";"));

        retranslateUi(chavepublica);

        QMetaObject::connectSlotsByName(chavepublica);
    } // setupUi

    void retranslateUi(QDialog *chavepublica)
    {
        chavepublica->setWindowTitle(QCoreApplication::translate("chavepublica", "Chaves", nullptr));
        titulo->setText(QCoreApplication::translate("chavepublica", "GERAR CHAVE P\303\232BLICA", nullptr));
        continuar->setText(QCoreApplication::translate("chavepublica", " CONTINUAR", nullptr));
        p->setText(QCoreApplication::translate("chavepublica", "p", nullptr));
        q->setText(QCoreApplication::translate("chavepublica", "q", nullptr));
        p_2->setText(QCoreApplication::translate("chavepublica", "DIGITE UM N\303\232MERO PRIMO", nullptr));
        p_3->setText(QCoreApplication::translate("chavepublica", "DIGITE UM N\303\232MERO PRIMO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chavepublica: public Ui_chavepublica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAVEPUBLICA_H
