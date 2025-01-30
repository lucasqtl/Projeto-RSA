#include "menu.h"
#include "ui_menu.h"
#include "chavepublica.h"
#include "encriptador.h"
#include "desencriptar.h"
#include "creditos.h"

menu::menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_chave_clicked()
{

    chavepublica lucas;
    lucas.exec();
}

void menu::on_encripta_clicked()
{
    encriptador encri;
    encri.exec();
}


void menu::on_desenc_clicked()
{
    desencriptar desenc;
    desenc.exec();
}


void menu::on_desenc_2_clicked()
{
    creditos credi;
    credi.exec();
}

