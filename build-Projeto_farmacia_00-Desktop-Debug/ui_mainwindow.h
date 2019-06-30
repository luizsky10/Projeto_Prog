/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEstoque;
    QAction *actionFuncionarios;
    QAction *actionVendas;
    QAction *actionSair;
    QAction *actionAjuda;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *botton_locker;
    QLabel *lb_nome_func;
    QMenuBar *menuBar;
    QMenu *menuGest_o;
    QMenu *menuSistema;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionEstoque = new QAction(MainWindow);
        actionEstoque->setObjectName(QStringLiteral("actionEstoque"));
        actionFuncionarios = new QAction(MainWindow);
        actionFuncionarios->setObjectName(QStringLiteral("actionFuncionarios"));
        actionVendas = new QAction(MainWindow);
        actionVendas->setObjectName(QStringLiteral("actionVendas"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        actionAjuda = new QAction(MainWindow);
        actionAjuda->setObjectName(QStringLiteral("actionAjuda"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 91, 27));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QLatin1String("background:#68b465;\n"
"font: 63 10pt \"FreeSans\";\n"
"color:#fff;\n"
"font-size:10pt;\n"
"border:none;\n"
"border-radius:10px;\n"
""));
        botton_locker = new QPushButton(centralWidget);
        botton_locker->setObjectName(QStringLiteral("botton_locker"));
        botton_locker->setGeometry(QRect(30, 150, 32, 32));
        botton_locker->setIconSize(QSize(24, 24));
        botton_locker->setFlat(true);
        lb_nome_func = new QLabel(centralWidget);
        lb_nome_func->setObjectName(QStringLiteral("lb_nome_func"));
        lb_nome_func->setGeometry(QRect(130, 150, 81, 17));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_nome_func->sizePolicy().hasHeightForWidth());
        lb_nome_func->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 27));
        menuGest_o = new QMenu(menuBar);
        menuGest_o->setObjectName(QStringLiteral("menuGest_o"));
        menuSistema = new QMenu(menuBar);
        menuSistema->setObjectName(QStringLiteral("menuSistema"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGest_o->menuAction());
        menuBar->addAction(menuSistema->menuAction());
        menuGest_o->addAction(actionEstoque);
        menuGest_o->addAction(actionFuncionarios);
        menuGest_o->addAction(actionVendas);
        menuSistema->addAction(actionSair);
        menuSistema->addAction(actionAjuda);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionEstoque->setText(QApplication::translate("MainWindow", "Estoque", Q_NULLPTR));
        actionFuncionarios->setText(QApplication::translate("MainWindow", "Funcionarios", Q_NULLPTR));
        actionVendas->setText(QApplication::translate("MainWindow", "Vendas", Q_NULLPTR));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", Q_NULLPTR));
        actionAjuda->setText(QApplication::translate("MainWindow", "Ajuda", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Efetuar Venda", Q_NULLPTR));
        botton_locker->setText(QApplication::translate("MainWindow", "locker", Q_NULLPTR));
        lb_nome_func->setText(QApplication::translate("MainWindow", "Sem Funcionario", Q_NULLPTR));
        menuGest_o->setTitle(QApplication::translate("MainWindow", "Gest\303\243o", Q_NULLPTR));
        menuSistema->setTitle(QApplication::translate("MainWindow", "Sistema", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
