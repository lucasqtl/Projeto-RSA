/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 300);
        MainWindow->setMaximumSize(QSize(500, 350));
        MainWindow->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: black;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(10, 200, 471, 51));
        progressBar->setToolTipDuration(-1);
        progressBar->setMinimum(0);
        progressBar->setMaximum(100000);
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 110, 81, 61));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:0;\n"
"color: rgb(0, 0, 0);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 60, 120, 120));
        label->setMaximumSize(QSize(120, 120));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/image1.png")));
        label->setScaledContents(true);
        label2 = new QLabel(centralwidget);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(190, 60, 100, 120));
        label2->setMaximumSize(QSize(100, 120));
        label2->setCursor(QCursor(Qt::ArrowCursor));
        label2->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/image2.png")));
        label2->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        label2->raise();
        progressBar->raise();
        pushButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Loading...", nullptr));
        pushButton->setText(QString());
        label->setText(QString());
        label2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
