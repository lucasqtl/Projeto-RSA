/********************************************************************************
** Form generated from reading UI file 'coprime.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPRIME_H
#define UI_COPRIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_coprime
{
public:
    QPushButton *continuar;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *p;

    void setupUi(QDialog *coprime)
    {
        if (coprime->objectName().isEmpty())
            coprime->setObjectName("coprime");
        coprime->resize(500, 300);
        coprime->setMaximumSize(QSize(500, 350));
        coprime->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        continuar = new QPushButton(coprime);
        continuar->setObjectName("continuar");
        continuar->setGeometry(QRect(190, 240, 101, 31));
        continuar->setStyleSheet(QString::fromUtf8("font: 10pt \"Nimbus Sans [UKWN]\";\n"
"background-color: rgb(47, 47, 47);\n"
"border: 2px solid white;"));
        label = new QLabel(coprime);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 40, 421, 141));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Nimbus Sans [UKWN]\";\n"
"border: 1px solid white;"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit = new QLineEdit(coprime);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 200, 121, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        p = new QLabel(coprime);
        p->setObjectName("p");
        p->setGeometry(QRect(160, 200, 16, 21));
        p->setStyleSheet(QString::fromUtf8("font: 700 14pt \"DejaVu Sans\";"));

        retranslateUi(coprime);

        QMetaObject::connectSlotsByName(coprime);
    } // setupUi

    void retranslateUi(QDialog *coprime)
    {
        coprime->setWindowTitle(QCoreApplication::translate("coprime", "Coprimo", nullptr));
        continuar->setText(QCoreApplication::translate("coprime", " CONTINUAR", nullptr));
        label->setText(QString());
        lineEdit->setText(QString());
        p->setText(QCoreApplication::translate("coprime", "e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coprime: public Ui_coprime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPRIME_H
