#include "efetuar_venda.h"
#include "ui_efetuar_venda.h"

efetuar_venda::efetuar_venda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::efetuar_venda)
{
    ui->setupUi(this);
}

efetuar_venda::~efetuar_venda()
{
    delete ui;
}
