/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cliente.h
 * Author: luiz
 *
 * Created on May 5, 2019, 6:27 PM
 */

#ifndef CLIENTE_H
#define CLIENTE_H



class Cliente {
public:
    Cliente();
    Cliente(const Cliente& orig);
    virtual ~Cliente();
    void SetTelefone(char telefone);
    char GetTelefone() const;
    void SetCpf(int cpf);
    int GetCpf() const;
private:
    int cpf;
    char telefone;
    //string historico;
};

#endif /* CLIENTE_H */

