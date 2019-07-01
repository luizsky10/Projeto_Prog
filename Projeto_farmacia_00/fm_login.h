#ifndef FM_LOGIN_H
#define FM_LOGIN_H
#include <QDialog>
#include "conexaobd.h"
#include "conexaobd_copy.h"




namespace Ui {
class fm_login;
}

class fm_login : public QDialog
{
    Q_OBJECT

public:
    explicit fm_login(QWidget *parent = 0);
    ~fm_login();
    bool logado;
    Conexao con;
    QString nome,acesso;
    QString getNome();
    QString getAcesso();
    bool getLogado();
    int id;

private slots:
    void on_pushButton_2_clicked();   // Botão Logar

    void on_pushButton_clicked(); // Botão cancelar

private:
    Ui::fm_login *ui;
};

#endif // FM_LOGIN_H
