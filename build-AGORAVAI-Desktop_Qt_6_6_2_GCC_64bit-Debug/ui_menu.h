/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QLabel *label;
    QLabel *ufal;
    QLabel *ic;
    QPushButton *chave;
    QPushButton *encripta;
    QPushButton *desenc;
    QPushButton *desenc_2;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(500, 300);
        menu->setMaximumSize(QSize(500, 350));
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(menu);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 20, 231, 41));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Nimbus Sans [UKWN]\";\n"
"border: 2px solid white;"));
        label->setAlignment(Qt::AlignCenter);
        ufal = new QLabel(menu);
        ufal->setObjectName("ufal");
        ufal->setGeometry(QRect(10, 10, 101, 91));
        ufal->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/ufal-sigla-branca-fundo-transparente.png")));
        ufal->setScaledContents(true);
        ic = new QLabel(menu);
        ic->setObjectName("ic");
        ic->setGeometry(QRect(390, 20, 71, 61));
        ic->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/logo-ic (1).png")));
        ic->setScaledContents(true);
        chave = new QPushButton(menu);
        chave->setObjectName("chave");
        chave->setGeometry(QRect(160, 100, 181, 41));
        chave->setStyleSheet(QString::fromUtf8("font: 10pt \"Nimbus Sans [UKWN]\";\n"
"background-color: rgb(47, 47, 47);\n"
"border: 2px solid white;"));
        encripta = new QPushButton(menu);
        encripta->setObjectName("encripta");
        encripta->setGeometry(QRect(160, 160, 181, 41));
        encripta->setStyleSheet(QString::fromUtf8("font: 10pt \"Nimbus Sans [UKWN]\";\n"
"background-color: rgb(47, 47, 47);\n"
"border: 2px solid white;"));
        desenc = new QPushButton(menu);
        desenc->setObjectName("desenc");
        desenc->setGeometry(QRect(160, 220, 181, 41));
        desenc->setStyleSheet(QString::fromUtf8("font: 10pt \"Nimbus Sans [UKWN]\";\n"
"background-color: rgb(47, 47, 47);\n"
"border: 2px solid white;"));
        desenc_2 = new QPushButton(menu);
        desenc_2->setObjectName("desenc_2");
        desenc_2->setGeometry(QRect(400, 230, 71, 31));
        desenc_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Nimbus Sans [UKWN]\";\n"
"background-color: rgb(47, 47, 47);\n"
"border: 2px solid white;"));

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Menu", nullptr));
        label->setText(QCoreApplication::translate("menu", "RSA", nullptr));
        ufal->setText(QString());
        ic->setText(QString());
        chave->setText(QCoreApplication::translate("menu", "GERAR CHAVE P\303\232BLICA", nullptr));
        encripta->setText(QCoreApplication::translate("menu", "ENCRIPTAR", nullptr));
        desenc->setText(QCoreApplication::translate("menu", "DESENCRIPTAR", nullptr));
        desenc_2->setText(QCoreApplication::translate("menu", "Cr\303\251ditos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
