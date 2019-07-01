#include "fm_login.h"
#include "ui_fm_login.h"
#include <QMessageBox>
#include "mainwindow.h"

fm_login::fm_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_login)
{
    ui->setupUi(this);
    logado=false;
}

fm_login::~fm_login()
{
    delete ui;
}

void fm_login::on_pushButton_2_clicked()  // Botão logar
{
    if(!con.abrir()){
        QMessageBox::warning(this, "Erro", "Não foi possível abrir o Banco de dados");
    }else{
        //QMessageBox::warning(this, "Banco", "O banco de dados foi aberto");
        QString username1, senha1;
        username1=ui->usernametxt->text();
        senha1=ui->senhatxt->text();
        QSqlQuery query;
        query.prepare("select * from tb_funcionarios where nome_func='"+username1+"' and senha_func='"+senha1+"'");

        if(!query.exec()){
            qDebug() << query.lastError().text();
         }

        if(query.exec()){
            query.first();
            if(query.value(1).toString()!= ""){
                MainWindow::nome_func=query.value(1).toString();;
                MainWindow::id_func=query.value(0).toInt();
                MainWindow::acesso_func=query.value(5).toString();
                MainWindow::logado=true;

              con.fechar();
              close();
            }else{
                QMessageBox::warning(this,"ERRO","Colaborador não encontrado");
                            }
                        }else{
                            QMessageBox::warning(this,"ERRO","Falha no login");
                        }
                    }

                    con.fechar();
}

void fm_login::on_pushButton_clicked()  // Botão Cancelar
    {
        logado=false;
        //con.fechar();
        close();

}
