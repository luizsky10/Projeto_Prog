#ifndef GESTAO_FUNCIONARIOS_H
#define GESTAO_FUNCIONARIOS_H

#include <QDialog>

namespace Ui {
class gestao_funcionarios;
}

class gestao_funcionarios : public QDialog
{
    Q_OBJECT

public:
    explicit gestao_funcionarios(QWidget *parent = 0);
    ~gestao_funcionarios();

private:
    Ui::gestao_funcionarios *ui;
};

#endif // GESTAO_FUNCIONARIOS_H
