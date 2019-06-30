#include "gestao_estoque.h"
#include "ui_gestao_estoque.h"
#include <QDialog>
#include <QMessageBox>

gestao_estoque::gestao_estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_estoque)
{
    ui->setupUi(this);
}

gestao_estoque::~gestao_estoque()
{
    delete ui;
}

void gestao_estoque::on_Novo_produto_clicked()   // Botão Novo Produto
{
    ui->l_Id_fornecedor->clear();
    ui->l_id_produto->clear();
    ui->l_Nome->clear();
    ui->l_Preco->clear();
    ui->l_Qtd_estoque->clear();
    ui->l_Valor->clear();
    ui->l_id_produto->setFocus();

}

void gestao_estoque::on_Cadastrar_clicked()   // Botão Cadastrar
{
    if(!con.abrir()){
               QMessageBox::warning(this, "Erro", "Erro ao abrir o Banco de Dados");

       }else{

        QString tmp;
        QString q_id_produto = ui->l_id_produto->text();
        QString q_nome = ui->l_Nome->text();
        QString q_id_fornecedor = ui->l_Id_fornecedor->text();
        QString q_Qtd = ui->l_Qtd_estoque->text();

        tmp=ui->l_Valor->text();
        std::replace(tmp.begin(), tmp.end(),',', '.');
        QString q_Valor = tmp;

        tmp=ui->l_Preco->text();
        std::replace(tmp.begin(), tmp.end(),',', '.');
        QString q_preco = tmp;


        QSqlQuery query;
        //query.prepare("insert into tb_produto( id_prod, nome_produto, id_fornecedor, qtd_estoque, valor, preco) values""("+QString::number(id_produto.toInt())+", '"+nome+"', "+QString::number(id_fornecedor.toInt())+", "+QString::number(Qtd.toInt())+", "+QString::number(Valor.toFloat())+", "+QString::number(preco.toFloat())+" )");

        //query.prepare("insert into tb_produto(id_prod) values""("+QString::number(id_produto.toInt())+")");


       query.prepare("insert into tb_produto (id_prod, nome_produto,id_fornecedor,qtd_estoque,valor,preco) values"
                      "("+QString::number(q_id_produto.toInt())+",'"+q_nome+"',"+QString::number(q_id_fornecedor.toInt())+","+QString::number(q_Qtd.toInt())+","+QString::number(q_Valor.toFloat())+","+QString::number(q_preco.toFloat())+")");


        if(!query.exec()){
            QMessageBox::warning(this, "Erro", "Erro ao inserir no Banco de Dados");
        }
        ui->l_Id_fornecedor->clear();
        ui->l_id_produto->clear();
        ui->l_Nome->clear();
        ui->l_Preco->clear();
        ui->l_Qtd_estoque->clear();
        ui->l_Valor->clear();
        ui->l_id_produto->setFocus();
        QMessageBox::information(this, "Produto", "Produto cadastrado com suscesso");
    }
}
