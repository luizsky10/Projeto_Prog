#ifndef CONEXAOBD_H
#define CONEXAOBD_H
#include <QtSql>

class Conexao{
public:
    QSqlDatabase database;
    Conexao(){
        database=QSqlDatabase::addDatabase("QSQLITE");
    }
    void fechar(){
        database.close();
        QSqlDatabase::removeDatabase("QSQLITE");
    }
    bool abrir(){
        QString local=qApp->applicationDirPath();
        QString banco =local+"/database/DB_farmacia.db";
        database.setDatabaseName(banco);
        // Verificando se o Banco de Dados está funcionando

        if(!database.open()){
            return false;
        }else{
            return true;
        }

    }
};



#endif // CONEXAOBD_H
