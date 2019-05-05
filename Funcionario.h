/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Funcionario.h
 * Author: luiz
 *
 * Created on May 5, 2019, 6:08 PM
 */

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "Gerente.h"
#include<string>
#include<iostream>

class Funcionario: public Gerente{
public:
    Funcionario();
    Funcionario(const Funcionario& orig);
    virtual ~Funcionario();
    //void cadastrar_clientes(Cliente&);
    // void controle_estoque(); - Sujeito a alteração
    //void consultar_historico(); - Sujeito a alteração
    //void efetuar_venda();
    private:

};

#endif /* FUNCIONARIO_H */

