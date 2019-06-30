#include "gestao_vendas.h"
#include "ui_gestao_vendas.h"

gestao_vendas::gestao_vendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_vendas)
{
    ui->setupUi(this);
}

gestao_vendas::~gestao_vendas()
{
    delete ui;
}
