#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include "fm_login.h"
#include <QObject>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QIcon cadeado_fechado;
    QIcon cadeado_aberto;
    QIcon logo;
    static bool logado;
    static QString nome_func, acesso_func, username_func;
    static int id_func;


private slots:
    void on_botton_locker_clicked();

    void on_pushButton_clicked();

    void on_actionEstoque_triggered();

    void on_actionFuncionarios_triggered();

    void on_actionVendas_triggered();



    void on_lb_nome_func_linkActivated(const QString &link);

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
