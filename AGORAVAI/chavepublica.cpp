// chavepublica.cpp

#include "chavepublica.h"
#include "ui_chavepublica.h"
#include "coprime.h"
#include "backend.h"
#include <QString>
#include <QMessageBox>
#include <gmp.h>

chavepublica::chavepublica(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::chavepublica)
{
    ui->setupUi(this);
}

chavepublica::~chavepublica()
{
    delete ui;
}

void chavepublica::on_continuar_clicked()
{
    QString p_texto = ui->lineEdit->text();
    QString q_texto = ui->lineEdit_2->text();

    const char *p_str = p_texto.toStdString().c_str();
    const char *q_str = q_texto.toStdString().c_str();


    mpz_init(p);
    mpz_init(q);

    mpz_set_str(p, p_str, 10);
    mpz_set_str(q, q_str, 10);

    isPrime(p, &res);
    if(!res){
        QMessageBox::warning(this, "PRIMO", "Um dos valores não é primo");
    }
    else{
        isPrime(q, &res);
        if(!res){
            QMessageBox::warning(this, "PRIMO", "Um dos valores não é primo");
        }
        else{
            coprime cop;
            cop.setValues(p_texto, q_texto, res);
            close();
            cop.exec();
        }
    }


    mpz_clear(p);
    mpz_clear(q);
}
