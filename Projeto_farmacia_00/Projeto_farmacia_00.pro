#-------------------------------------------------
#
# Project created by QtCreator 2019-05-21T17:07:19
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projeto_farmacia_00
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    fm_login.cpp \
    efetuar_venda.cpp \
    gestao_vendas.cpp \
    gestao_estoque.cpp \
    gestao_funcionarios.cpp

HEADERS += \
    conexaobd.h \
    mainwindow.h \
    fm_login.h \
    efetuar_venda.h \
    gestao_vendas.h \
    gestao_estoque.h \
    gestao_funcionarios.h

FORMS += \
        mainwindow.ui \
    fm_login.ui \
    efetuar_venda.ui \
    gestao_vendas.ui \
    gestao_estoque.ui \
    gestao_funcionarios.ui

RESOURCES += \
    arquivo_recursos.qrc
