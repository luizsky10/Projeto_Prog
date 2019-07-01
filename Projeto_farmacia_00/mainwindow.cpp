#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "efetuar_venda.h"
#include "gestao_estoque.h"
#include "gestao_vendas.h"
#include "gestao_funcionarios.h"

int MainWindow::id_func;
QString MainWindow::nome_func;
QString MainWindow::username_func;
QString MainWindow::acesso_func;
bool MainWindow::logado;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    logado=false;


    // Definindo os icones para o botão de bloquear e desbloquear
    cadeado_fechado.addFile(":/imagens/imgs/locked.png");
    cadeado_aberto.addFile(":/imagens/imgs/unlocked.png");
    logo.addFile(":/imagens/imgs/logo.jpeg");

    ui->botton_locker->setText("");
    ui->botton_locker->setIcon(cadeado_fechado);
    ui->statusBar->addWidget(ui->botton_locker);
    ui->statusBar->addWidget(ui->lb_nome_func);
    ui->logo->setIcon(logo);

    // Fim do bloco de icones botão bloquear/desbloquear


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_botton_locker_clicked()
{
    if(!logado){
        fm_login f_login;    //Tela de desbloqueio
        f_login.exec();
        if(logado){
            ui->botton_locker->setIcon(cadeado_aberto);
            ui->lb_nome_func->setText(nome_func);
        }
    }else{
        logado=false;
        ui->botton_locker->setIcon(cadeado_fechado );
        ui->lb_nome_func->setText("Sem Funcionario");
    }
}


void MainWindow::on_pushButton_clicked()   // Botão nova venda
{

}

void MainWindow::on_actionEstoque_triggered() // Botão gestão estoque
{
    if(logado){
        if(acesso_func == "C"){
            gestao_estoque f_gestao_Estoque;
            f_gestao_Estoque.exec();
        }else{
            QMessageBox::warning(this,"ERRO","Usuário sem permissão");
        }
    }else{
        QMessageBox::warning(this,"ERRO","Nenhum usuário logado.");
    }
}

void MainWindow::on_actionFuncionarios_triggered()
{
    if(logado){
        if(acesso_func == "C"){
            gestao_funcionarios f_gestao_funcionarios;
            f_gestao_funcionarios.exec();
        }else{
            QMessageBox::warning(this,"ERRO","Usuário sem permissão");
        }
    }else{
        QMessageBox::warning(this,"ERRO","Nenhum usuário logado.");
    }
 }



void MainWindow::on_actionVendas_triggered()
{
    if(logado){
        if(acesso_func == "C"){
            gestao_vendas f_gestao_vendas;
            f_gestao_vendas.exec();
        }else{
            QMessageBox::warning(this,"ERRO","Usuário sem permissão");
        }
    }else{
        QMessageBox::warning(this,"ERRO","Nenhum usuário logado.");
      }
}


void MainWindow::on_pushButton_3_clicked()
{
    if(logado){
        efetuar_venda f_efetuar_venda;
        f_efetuar_venda.exec();
    }else{
        QMessageBox::warning(this,"ERRO","Nenhum usuário logado.");

    }
}
