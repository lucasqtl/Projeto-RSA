// coprime.h

#ifndef COPRIME_H
#define COPRIME_H

#include <QDialog>
#include <gmp.h>

namespace Ui {
class coprime;
}

class coprime : public QDialog
{
    Q_OBJECT

public:
    explicit coprime(QWidget *parent = nullptr);
    ~coprime();

    void setValues(const QString& pValue, const QString& qValue, int res);

private slots:
    void on_continuar_clicked();

private:
    Ui::coprime *ui;
    mpz_t e;
    mpz_t n;
    mpz_t p;
    mpz_t q;
    mpz_t calculo;
    int res;

};

#endif // COPRIME_H
