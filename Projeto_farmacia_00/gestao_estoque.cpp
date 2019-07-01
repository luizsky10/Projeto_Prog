#include "gestao_estoque.h"
#include "ui_gestao_estoque.h"
#include <QDialog>
#include <QMessageBox>

gestao_estoque::gestao_estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_estoque)
{
    ui->setupUi(this);
    // Abrindo a conexão com o Banco dentro do construtor
    //ui->l_id_produto->setFocus();
    if(!con.abrir()){
        QMessageBox::warning(this, "Erro", "Erro ao abrir o Banco de Dados");
    }else{
        QSqlQuery query;
        query.prepare("select * from tb_produto");
        if(query.exec()){

        }else{
            QMessageBox::warning(this, "Erro", "Erro ao exibir produtos");
        }
    }
    ui->tableWidget->setColumnCount(2);
    ui->tabWidget->setCurrentIndex(0);

}

gestao_estoque::~gestao_estoque()       // Destrutor
{
    delete ui;
    con.fechar();
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
    // Bloco de extração dos caracteres digitados no programa e atribuição nas variáveis

    QString tmp;
    QString q_id_produto = ui->l_id_produto->text();
    QString q_nome = ui->l_Nome->text();
    QString q_id_fornecedor = ui->l_Id_fornecedor->text();
    QString q_Qtd = ui->l_Qtd_estoque->text();
    tmp=ui->l_Valor->text();
    std::replace(tmp.begin(), tmp.end(),',', '.');  // Tratamento de Exceção da virgula
    QString q_Valor = tmp;
    tmp=ui->l_Preco->text();
    std::replace(tmp.begin(), tmp.end(),',', '.');
    QString q_preco = tmp;

    // Declaração e preparação da query do banco de dados

    QSqlQuery query;
    query.prepare("insert into tb_produto (id_prod, nome_produto,id_fornecedor,qtd_estoque,valor,preco) values"
    "("+QString::number(q_id_produto.toInt())+",'"+q_nome+"',"+QString::number(q_id_fornecedor.toInt())+","+QString::number(q_Qtd.toInt())+","+QString::number(q_Valor.toFloat())+","+QString::number(q_preco.toFloat())+")");


    if(!query.exec()){
        QMessageBox::warning(this, "Erro", "Erro ao inserir no Banco de Dados");
    }else{
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


void gestao_estoque::on_tabWidget_currentChanged(int index)  // Alteração para a segunda Aba
{



    if(index == 1){
        remove_lines(ui->tableWidget);
        int conta_linhas=0;
        QSqlQuery query;
        query.prepare("select id_prod,nome_produto from tb_produto order by nome_produto");
        if(!query.exec()){
            QMessageBox::warning(this, "Erro", "Erro ao exibir produtos");
        }else{
            while(query.next()){
                ui->tableWidget->insertRow(conta_linhas);
                ui->tableWidget->setItem(conta_linhas, 0, new QTableWidgetItem(query.value(0).toString()));
                ui->tableWidget->setItem(conta_linhas, 1, new QTableWidgetItem(query.value(1).toString()));
                ui->tableWidget->setRowHeight(conta_linhas, 20);
                conta_linhas++;
            }
            ui->tableWidget->setColumnWidth(0, 155);
            ui->tableWidget->setColumnWidth(0, 250);
            QStringList headers={"Id_produto", "Nome"};
            ui->tableWidget->setHorizontalHeaderLabels(headers);
            ui->tableWidget->setStyleSheet("QTableView {selection-background-color:blue}");
            ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableWidget->verticalHeader()->setVisible(false);

        }

    }
}

void gestao_estoque::remove_lines(QTableWidget *tableWidget){   // Remove as da Table Widget para não ter informação duplicada
    while(tableWidget->rowCount() >0){
        tableWidget->removeRow(0);
    }


}

void gestao_estoque::on_tableWidget_itemSelectionChanged()      // Bloco para exibição do item selecionado
{
    int cod = ui->tableWidget->item(ui->tableWidget->currentRow(), 0)->text().toInt();
    QSqlQuery query;
    query.prepare("select * from tb_produto where id_prod="+QString::number(cod));

    if(query.exec()){
        query.first();
        ui->g_id_produto->setText(query.value(0).toString());
        ui->g_nome_produto->setText(query.value(1).toString());
        ui->g_id_fornecedor->setText(query.value(2).toString());
        ui->g_qtd_produto->setText(query.value(3).toString());
        ui->g_valor_produto->setText(query.value(4).toString());
        ui->g_preco_produto->setText(query.value(5).toString());

    }else{
        QMessageBox::warning(this, "Erro", "Erro ao exibir produtos");

    }

}

void gestao_estoque::on_push_salvar_clicked() // Botão Salvar
{
    if(ui->g_id_produto->text()==""){
        QMessageBox::warning(this, "Erro", "Selecione um produto");

    }else{
       int cod = ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt();
        QString aux;
        QString nome_prod=ui->g_nome_produto->text();
        QString forn=ui->g_id_fornecedor->text();
        QString qtde= ui->g_qtd_produto->text();

        aux=ui->l_Valor->text();
        std::replace(aux.begin(), aux.end(),',', '.');  // Tratamento de Exceção da virgula
        QString q_Valor = aux;
        aux=ui->l_Preco->text();
        std::replace(aux.begin(), aux.end(),',', '.');  // Tratamento de Exceção da virgula
        QString preco = aux;

        QSqlQuery query;
        //query.prepare("update tb_produto set id_prod="+QString::number(cod)+",produto='"+nome_prod"', id_fornecedor="+QString::number(forn.toInt())+", qtd_estoque="+QString::number(qtde.toInt())+", valor="+QString::number(q_Valor.toFloat())+",preco="+QString::number(preco.toFloat())+" where id_prod ="+QString::number(cod));
        query.prepare("update tb_produto set id_prod="+QString::number(cod)+",nome_produto='"+nome_prod+"', id_fornecedor="+QString::number(forn.toInt())+", qtd_estoque="+QString::number(qtde.toInt())+", valor="+QString::number(q_Valor.toDouble())+",preco="+QString::number(preco.toDouble())+" where id_prod ="+QString::number(cod));

        if(query.exec()){
            int line=ui->tableWidget->currentRow();
            ui->tableWidget->item(line, 0)->setText(ui->g_id_produto->text());
            ui->tableWidget->item(line, 1)->setText(nome_prod);
            //QMessageBox::Information(this, "Atualizado", "Produto atualizado corretamente");
            QMessageBox::warning(this, "Sucesso", "Produto atualizado");
        }else{
            QMessageBox::warning(this, "Erro", "Problema na query");
        }

    }
}
