#ifndef GESTAO_ESTOQUE_H
#define GESTAO_ESTOQUE_H

#include <QDialog>

#include "conexaobd.h"
#include <QtSql>
#include <QTableWidget>

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
    void remove_lines(QTableWidget *tw);

private slots:
    void on_Novo_produto_clicked();

    void on_Cadastrar_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_tableWidget_itemSelectionChanged();

    void on_push_salvar_clicked();

private:
    Ui::gestao_estoque *ui;
};

#endif // GESTAO_ESTOQUE_H
