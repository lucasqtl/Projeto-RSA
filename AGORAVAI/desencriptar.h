#ifndef DESENCRIPTAR_H
#define DESENCRIPTAR_H

#include <QDialog>
#include <gmp.h>

namespace Ui {
class desencriptar;
}

class desencriptar : public QDialog
{
    Q_OBJECT

public:
    explicit desencriptar(QWidget *parent = nullptr);
    ~desencriptar();

private slots:
    void on_continuar_clicked();

private:
    Ui::desencriptar *ui;
    mpz_t p;
    mpz_t q;
    mpz_t e;
};

#endif // DESENCRIPTAR_H
