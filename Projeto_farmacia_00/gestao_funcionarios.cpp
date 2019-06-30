#include "gestao_funcionarios.h"
#include "ui_gestao_funcionarios.h"

gestao_funcionarios::gestao_funcionarios(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_funcionarios)
{
    ui->setupUi(this);
}

gestao_funcionarios::~gestao_funcionarios()
{
    delete ui;
}
