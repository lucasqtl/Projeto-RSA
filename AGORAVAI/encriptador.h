#ifndef ENCRIPTADOR_H
#define ENCRIPTADOR_H

#include <QDialog>

namespace Ui {
class encriptador;
}

class encriptador : public QDialog
{
    Q_OBJECT

public:
    explicit encriptador(QWidget *parent = nullptr);
    ~encriptador();

private slots:
    void on_continuar_clicked();

private:
    Ui::encriptador *ui;
};

#endif // ENCRIPTADOR_H
