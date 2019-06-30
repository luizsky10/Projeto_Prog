#ifndef EFETUAR_VENDA_H
#define EFETUAR_VENDA_H

#include <QDialog>

namespace Ui {
class efetuar_venda;
}

class efetuar_venda : public QDialog
{
    Q_OBJECT

public:
    explicit efetuar_venda(QWidget *parent = 0);
    ~efetuar_venda();

private:
    Ui::efetuar_venda *ui;
};

#endif // EFETUAR_VENDA_H
