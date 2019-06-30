#ifndef GESTAO_ESTOQUE_H
#define GESTAO_ESTOQUE_H

#include <QDialog>

#include "conexaobd.h"
#include <QtSql>

namespace Ui {
class gestao_estoque;
}

class gestao_estoque : public QDialog
{
    Q_OBJECT

public:
    explicit gestao_estoque(QWidget *parent = 0);
    ~gestao_estoque();
    Conexao con;

private slots:
    void on_Novo_produto_clicked();

    void on_Cadastrar_clicked();

private:
    Ui::gestao_estoque *ui;
};

#endif // GESTAO_ESTOQUE_H
