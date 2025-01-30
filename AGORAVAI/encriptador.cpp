#include "encriptador.h"
#include "ui_encriptador.h"
#include "backend.h" // Inclua o arquivo de cabeçalho onde a função 'enc()' está declarada
#include <QMessageBox>
encriptador::encriptador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::encriptador)
{
    ui->setupUi(this);
}

encriptador::~encriptador()
{
    delete ui;
}

void encriptador::on_continuar_clicked()
{
    // Obter o texto da textEdit
    QString texto = ui->textEdit->toPlainText();
    QByteArray texto_bytes = texto.toUtf8();
    const char* texto_char = texto_bytes.constData();
    // Obter os valores de 'n' e 'e' dos lineEdits
    QString n_str = ui->lineEdit->text();
    QString e_str = ui->lineEdit_2->text();

    // Converter os valores de 'n' e 'e' para mpz_t
    mpz_t n, e;
    mpz_init(n);
    mpz_init(e);
    mpz_set_str(n, n_str.toStdString().c_str(), 10);
    mpz_set_str(e, e_str.toStdString().c_str(), 10);

    // Chamar a função 'enc()' do backend para realizar a criptografia
    enc(texto_char, n, e);

    // Exibir uma mensagem indicando que a criptografia foi concluída
    QMessageBox::information(this, "Criptografia", "Texto criptografado com sucesso!");
    close();

    mpz_clear(n);
    mpz_clear(e);
}
