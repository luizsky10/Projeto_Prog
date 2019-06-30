#ifndef GESTAO_VENDAS_H
#define GESTAO_VENDAS_H

#include <QDialog>

namespace Ui {
class gestao_vendas;
}

class gestao_vendas : public QDialog
{
    Q_OBJECT

public:
    explicit gestao_vendas(QWidget *parent = 0);
    ~gestao_vendas();

private:
    Ui::gestao_vendas *ui;
};

#endif // GESTAO_VENDAS_H
