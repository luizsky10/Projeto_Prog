/********************************************************************************
** Form generated from reading UI file 'gestao_estoque.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTAO_ESTOQUE_H
#define UI_GESTAO_ESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestao_estoque
{
public:
    QTabWidget *tabWidget;
    QWidget *NovoProduto;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *l_Preco;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *l_Valor;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *l_Qtd_estoque;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *l_id_produto;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *l_Nome;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *l_Id_fornecedor;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Novo_produto;
    QSpacerItem *horizontalSpacer;
    QPushButton *Cadastrar;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *ControleProdutos;
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_3;
    QPushButton *push_filtrar;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLineEdit *g_id_produto;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLineEdit *g_nome_produto;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QLineEdit *g_id_fornecedor;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QLineEdit *g_qtd_produto;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QLineEdit *g_valor_produto;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QLineEdit *g_preco_produto;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *push_salvar;
    QPushButton *push_excluir;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *rb_g_produto;
    QRadioButton *rb_g_nome;

    void setupUi(QDialog *gestao_estoque)
    {
        if (gestao_estoque->objectName().isEmpty())
            gestao_estoque->setObjectName(QStringLiteral("gestao_estoque"));
        gestao_estoque->resize(915, 488);
        tabWidget = new QTabWidget(gestao_estoque);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 921, 491));
        NovoProduto = new QWidget();
        NovoProduto->setObjectName(QStringLiteral("NovoProduto"));
        horizontalLayoutWidget = new QWidget(NovoProduto);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(220, 200, 481, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        l_Preco = new QLineEdit(horizontalLayoutWidget);
        l_Preco->setObjectName(QStringLiteral("l_Preco"));

        horizontalLayout->addWidget(l_Preco);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        l_Valor = new QLineEdit(horizontalLayoutWidget);
        l_Valor->setObjectName(QStringLiteral("l_Valor"));

        horizontalLayout->addWidget(l_Valor);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        l_Qtd_estoque = new QLineEdit(horizontalLayoutWidget);
        l_Qtd_estoque->setObjectName(QStringLiteral("l_Qtd_estoque"));

        horizontalLayout->addWidget(l_Qtd_estoque);

        horizontalLayoutWidget_2 = new QWidget(NovoProduto);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(220, 70, 481, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        l_id_produto = new QLineEdit(horizontalLayoutWidget_2);
        l_id_produto->setObjectName(QStringLiteral("l_id_produto"));

        horizontalLayout_2->addWidget(l_id_produto);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        l_Nome = new QLineEdit(horizontalLayoutWidget_2);
        l_Nome->setObjectName(QStringLiteral("l_Nome"));

        horizontalLayout_2->addWidget(l_Nome);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        l_Id_fornecedor = new QLineEdit(horizontalLayoutWidget_2);
        l_Id_fornecedor->setObjectName(QStringLiteral("l_Id_fornecedor"));

        horizontalLayout_2->addWidget(l_Id_fornecedor);

        horizontalLayoutWidget_3 = new QWidget(NovoProduto);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(360, 310, 221, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Novo_produto = new QPushButton(horizontalLayoutWidget_3);
        Novo_produto->setObjectName(QStringLiteral("Novo_produto"));

        horizontalLayout_3->addWidget(Novo_produto);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        Cadastrar = new QPushButton(horizontalLayoutWidget_3);
        Cadastrar->setObjectName(QStringLiteral("Cadastrar"));

        horizontalLayout_3->addWidget(Cadastrar);

        label = new QLabel(NovoProduto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 110, 54, 17));
        label_2 = new QLabel(NovoProduto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(440, 100, 54, 17));
        label_3 = new QLabel(NovoProduto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(600, 100, 111, 20));
        label_4 = new QLabel(NovoProduto);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(440, 230, 54, 17));
        label_5 = new QLabel(NovoProduto);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 230, 54, 17));
        label_6 = new QLabel(NovoProduto);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(590, 230, 121, 20));
        label_7 = new QLabel(NovoProduto);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(240, 100, 61, 20));
        tabWidget->addTab(NovoProduto, QString());
        ControleProdutos = new QWidget();
        ControleProdutos->setObjectName(QStringLiteral("ControleProdutos"));
        tableWidget = new QTableWidget(ControleProdutos);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(370, 141, 341, 151));
        widget = new QWidget(ControleProdutos);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(380, 90, 281, 29));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_6->addWidget(lineEdit_3);

        push_filtrar = new QPushButton(widget);
        push_filtrar->setObjectName(QStringLiteral("push_filtrar"));

        horizontalLayout_6->addWidget(push_filtrar);

        widget1 = new QWidget(ControleProdutos);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 20, 331, 431));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        g_id_produto = new QLineEdit(widget1);
        g_id_produto->setObjectName(QStringLiteral("g_id_produto"));

        verticalLayout->addWidget(g_id_produto);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        g_nome_produto = new QLineEdit(widget1);
        g_nome_produto->setObjectName(QStringLiteral("g_nome_produto"));

        verticalLayout_2->addWidget(g_nome_produto);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);

        g_id_fornecedor = new QLineEdit(widget1);
        g_id_fornecedor->setObjectName(QStringLiteral("g_id_fornecedor"));

        verticalLayout_4->addWidget(g_id_fornecedor);


        verticalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_5->addWidget(label_11);

        g_qtd_produto = new QLineEdit(widget1);
        g_qtd_produto->setObjectName(QStringLiteral("g_qtd_produto"));

        verticalLayout_5->addWidget(g_qtd_produto);


        verticalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_12 = new QLabel(widget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_6->addWidget(label_12);

        g_valor_produto = new QLineEdit(widget1);
        g_valor_produto->setObjectName(QStringLiteral("g_valor_produto"));

        verticalLayout_6->addWidget(g_valor_produto);


        verticalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_13 = new QLabel(widget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_7->addWidget(label_13);

        g_preco_produto = new QLineEdit(widget1);
        g_preco_produto->setObjectName(QStringLiteral("g_preco_produto"));

        verticalLayout_7->addWidget(g_preco_produto);


        verticalLayout_3->addLayout(verticalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        push_salvar = new QPushButton(widget1);
        push_salvar->setObjectName(QStringLiteral("push_salvar"));

        horizontalLayout_4->addWidget(push_salvar);

        push_excluir = new QPushButton(widget1);
        push_excluir->setObjectName(QStringLiteral("push_excluir"));

        horizontalLayout_4->addWidget(push_excluir);


        verticalLayout_3->addLayout(horizontalLayout_4);

        widget2 = new QWidget(ControleProdutos);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(420, 20, 192, 62));
        verticalLayout_9 = new QVBoxLayout(widget2);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        groupBox = new QGroupBox(widget2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        rb_g_produto = new QRadioButton(groupBox);
        rb_g_produto->setObjectName(QStringLiteral("rb_g_produto"));
        rb_g_produto->setChecked(true);

        horizontalLayout_5->addWidget(rb_g_produto);

        rb_g_nome = new QRadioButton(groupBox);
        rb_g_nome->setObjectName(QStringLiteral("rb_g_nome"));

        horizontalLayout_5->addWidget(rb_g_nome);


        verticalLayout_8->addWidget(groupBox);


        verticalLayout_9->addLayout(verticalLayout_8);

        tabWidget->addTab(ControleProdutos, QString());

        retranslateUi(gestao_estoque);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestao_estoque);
    } // setupUi

    void retranslateUi(QDialog *gestao_estoque)
    {
        gestao_estoque->setWindowTitle(QApplication::translate("gestao_estoque", "Dialog", Q_NULLPTR));
        Novo_produto->setText(QApplication::translate("gestao_estoque", "Limpar Campos", Q_NULLPTR));
        Cadastrar->setText(QApplication::translate("gestao_estoque", "Cadastrar", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("gestao_estoque", "Nome ", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestao_estoque", "Id  Fornecedor", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestao_estoque", "Valor", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestao_estoque", "Pre\303\247o", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestao_estoque", "Quantidade Estoque", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestao_estoque", "Id Produto", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(NovoProduto), QApplication::translate("gestao_estoque", "Novo Produto", Q_NULLPTR));
        push_filtrar->setText(QApplication::translate("gestao_estoque", "Filtrar", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestao_estoque", "Id Produto", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestao_estoque", "Nome", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestao_estoque", "Id Fornecedor", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestao_estoque", "Quantidade", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestao_estoque", "Valor", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestao_estoque", "Pre\303\247o", Q_NULLPTR));
        push_salvar->setText(QApplication::translate("gestao_estoque", "Salvar", Q_NULLPTR));
        push_excluir->setText(QApplication::translate("gestao_estoque", "Excluir", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("gestao_estoque", "Filtrar por:", Q_NULLPTR));
        rb_g_produto->setText(QApplication::translate("gestao_estoque", "Id Produto", Q_NULLPTR));
        rb_g_nome->setText(QApplication::translate("gestao_estoque", "Nome", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ControleProdutos), QApplication::translate("gestao_estoque", "Controle de Produtos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestao_estoque: public Ui_gestao_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTAO_ESTOQUE_H
