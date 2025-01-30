// coprime.cpp

#include "coprime.h"
#include "ui_coprime.h"
#include "backend.h"
#include <gmp.h>
#include <QMessageBox>


coprime::coprime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::coprime)
{
    ui->setupUi(this);
}

coprime::~coprime()
{
    delete ui;
}

void coprime::setValues(const QString& pValue, const QString& qValue, int res)
{
    mpz_init(calculo);

    mpz_init(this->p); // Inicializa p
    mpz_init(this->q); // Inicializa q

    mpz_set_str(this->p, pValue.toStdString().c_str(), 10); // Define o valor de p
    mpz_set_str(this->q, qValue.toStdString().c_str(), 10); // Define o valor de q

    char* calculo_str;

    mpz_sub_ui(this->p, this->p, 1); // p = p - 1
    mpz_sub_ui(this->q, this->q, 1); // q = q - 1
    mpz_mul(calculo, this->p, this->q); // calculo = (p - 1) * (q - 1)

    calculo_str = mpz_get_str(nullptr, 10, calculo);

    this->res = res;
    mpz_init(this->e);

    // Exibe os valores de p e q, além do valor de calculo na interface
    ui->label->setText("p: " + pValue + "\n\nq: " + qValue + "\n\nAgora escreva um valor relativamente primo a: \n" + QString(calculo_str));

    mpz_clear(calculo);
    free(calculo_str);
}

void coprime::on_continuar_clicked()
{
    QString e_texto = ui->lineEdit->text();
    const char *e_str = e_texto.toStdString().c_str();
    mpz_init(this->e);
    mpz_set_str(this->e, e_str, 25);

    // Chama a função comprimo para verificar se e é coprimo com (p-1)*(q-1)
    comprimo(&(this->res), this->e, calculo);


        // Calcula o valor de n = p * q
        mpz_init(this->n);
        mpz_add_ui(this->p, this->p, 1); // p = p + 1
        mpz_add_ui(this->q, this->q, 1); // q = q + 1
        mpz_mul(this->n, this->p, this->q);

        // Exibe a mensagem de sucesso com o valor de n
        QMessageBox::warning(this, "CHAVES", "Chave pública criada com sucesso:\n n: " + QString(mpz_get_str(nullptr, 10, n)) + "\n e: " + e_texto);
        close();


    mpz_clear(this->e);
    mpz_clear(this->n);
    mpz_clear(this->p);
    mpz_clear(this->q);
}
