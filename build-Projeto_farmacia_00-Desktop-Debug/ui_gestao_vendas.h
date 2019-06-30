/********************************************************************************
** Form generated from reading UI file 'gestao_vendas.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTAO_VENDAS_H
#define UI_GESTAO_VENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_gestao_vendas
{
public:

    void setupUi(QDialog *gestao_vendas)
    {
        if (gestao_vendas->objectName().isEmpty())
            gestao_vendas->setObjectName(QStringLiteral("gestao_vendas"));
        gestao_vendas->resize(400, 300);

        retranslateUi(gestao_vendas);

        QMetaObject::connectSlotsByName(gestao_vendas);
    } // setupUi

    void retranslateUi(QDialog *gestao_vendas)
    {
        gestao_vendas->setWindowTitle(QApplication::translate("gestao_vendas", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestao_vendas: public Ui_gestao_vendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTAO_VENDAS_H
