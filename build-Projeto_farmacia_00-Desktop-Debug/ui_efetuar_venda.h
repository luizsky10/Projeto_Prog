/********************************************************************************
** Form generated from reading UI file 'efetuar_venda.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EFETUAR_VENDA_H
#define UI_EFETUAR_VENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_efetuar_venda
{
public:
    QPushButton *bt_venda;
    QPushButton *bt_cancelar;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *efetuar_venda)
    {
        if (efetuar_venda->objectName().isEmpty())
            efetuar_venda->setObjectName(QStringLiteral("efetuar_venda"));
        efetuar_venda->resize(547, 366);
        bt_venda = new QPushButton(efetuar_venda);
        bt_venda->setObjectName(QStringLiteral("bt_venda"));
        bt_venda->setGeometry(QRect(330, 300, 85, 27));
        bt_cancelar = new QPushButton(efetuar_venda);
        bt_cancelar->setObjectName(QStringLiteral("bt_cancelar"));
        bt_cancelar->setGeometry(QRect(130, 300, 85, 27));
        lineEdit = new QLineEdit(efetuar_venda);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 120, 113, 27));
        lineEdit_2 = new QLineEdit(efetuar_venda);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 120, 113, 27));
        lineEdit_3 = new QLineEdit(efetuar_venda);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(360, 120, 113, 27));
        label = new QLabel(efetuar_venda);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 150, 54, 17));
        label_2 = new QLabel(efetuar_venda);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 150, 54, 17));
        label_3 = new QLabel(efetuar_venda);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 150, 54, 17));

        retranslateUi(efetuar_venda);

        QMetaObject::connectSlotsByName(efetuar_venda);
    } // setupUi

    void retranslateUi(QDialog *efetuar_venda)
    {
        efetuar_venda->setWindowTitle(QApplication::translate("efetuar_venda", "Dialog", Q_NULLPTR));
        bt_venda->setText(QApplication::translate("efetuar_venda", "PushButton", Q_NULLPTR));
        bt_cancelar->setText(QApplication::translate("efetuar_venda", "PushButton", Q_NULLPTR));
        label->setText(QApplication::translate("efetuar_venda", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("efetuar_venda", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("efetuar_venda", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class efetuar_venda: public Ui_efetuar_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EFETUAR_VENDA_H
