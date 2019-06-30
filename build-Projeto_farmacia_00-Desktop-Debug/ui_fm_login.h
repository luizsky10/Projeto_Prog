/********************************************************************************
** Form generated from reading UI file 'fm_login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_LOGIN_H
#define UI_FM_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_login
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *usernametxt;
    QLabel *label_2;
    QLineEdit *senhatxt;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *fm_login)
    {
        if (fm_login->objectName().isEmpty())
            fm_login->setObjectName(QStringLiteral("fm_login"));
        fm_login->resize(491, 153);
        layoutWidget = new QWidget(fm_login);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 10, 114, 108));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        usernametxt = new QLineEdit(layoutWidget);
        usernametxt->setObjectName(QStringLiteral("usernametxt"));

        verticalLayout->addWidget(usernametxt);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        senhatxt = new QLineEdit(layoutWidget);
        senhatxt->setObjectName(QStringLiteral("senhatxt"));
        senhatxt->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(senhatxt);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        layoutWidget1 = new QWidget(fm_login);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(160, 120, 178, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(fm_login);

        QMetaObject::connectSlotsByName(fm_login);
    } // setupUi

    void retranslateUi(QDialog *fm_login)
    {
        fm_login->setWindowTitle(QApplication::translate("fm_login", "Dialog", Q_NULLPTR));
        usernametxt->setText(QString());
        label_2->setText(QApplication::translate("fm_login", "Login", Q_NULLPTR));
        senhatxt->setText(QString());
        label_3->setText(QApplication::translate("fm_login", "Senha", Q_NULLPTR));
        pushButton->setText(QApplication::translate("fm_login", "Sair", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("fm_login", "Logar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_login: public Ui_fm_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_LOGIN_H
