#ifndef CHAVEPUBLICA_H
#define CHAVEPUBLICA_H

#include <QDialog>
#include <gmp.h>

namespace Ui {
class chavepublica;
}

class chavepublica : public QDialog
{
    Q_OBJECT

public:
    explicit chavepublica(QWidget *parent = nullptr);
    ~chavepublica();

private slots:
    void on_continuar_clicked();

private:
    Ui::chavepublica *ui;
    mpz_t p;
    mpz_t q;
    int res;
};

#endif // CHAVEPUBLICA_H
