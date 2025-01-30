#include "desencriptar.h"
#include "ui_desencriptar.h"
#include "backend.h"
#include <gmp.h>

desencriptar::desencriptar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::desencriptar)
{
    ui->setupUi(this);
}

desencriptar::~desencriptar()
{
    delete ui;
}


void desencriptar::on_continuar_clicked()
{
    QString pStr = ui->lineEdit->text();
    QString qStr = ui->lineEdit_2->text();
    QString eStr = ui->lineEdit_3->text();

    const char *pCStr = pStr.toStdString().c_str();
    const char *qCStr = qStr.toStdString().c_str();
    const char *eCStr = eStr.toStdString().c_str();

    mpz_init(p);
    mpz_init(q);
    mpz_init(e);
    mpz_set_str(p, pCStr, 10);
    mpz_set_str(q, qCStr, 10);
    mpz_set_str(e, eCStr, 10);

    // Chama a função desenc() do backend passando os valores de p, q e e
    int resultado = desenc(p, q, e);

    // Limpa os valores de p, q e e
    mpz_clear(p);
    mpz_clear(q);
    mpz_clear(e);

    ui->label->setText("Mensagem descriptografada com sucesso.");

}

