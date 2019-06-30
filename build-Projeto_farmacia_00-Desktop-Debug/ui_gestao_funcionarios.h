/********************************************************************************
** Form generated from reading UI file 'gestao_funcionarios.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTAO_FUNCIONARIOS_H
#define UI_GESTAO_FUNCIONARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_gestao_funcionarios
{
public:

    void setupUi(QDialog *gestao_funcionarios)
    {
        if (gestao_funcionarios->objectName().isEmpty())
            gestao_funcionarios->setObjectName(QStringLiteral("gestao_funcionarios"));
        gestao_funcionarios->resize(400, 300);

        retranslateUi(gestao_funcionarios);

        QMetaObject::connectSlotsByName(gestao_funcionarios);
    } // setupUi

    void retranslateUi(QDialog *gestao_funcionarios)
    {
        gestao_funcionarios->setWindowTitle(QApplication::translate("gestao_funcionarios", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestao_funcionarios: public Ui_gestao_funcionarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTAO_FUNCIONARIOS_H
