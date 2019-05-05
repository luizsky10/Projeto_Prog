/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gerente.h
 * Author: luiz
 *
 * Created on May 5, 2019, 3:29 PM
 */

#ifndef GERENTE_H
#define GERENTE_H
#include "pessoa.h"
#include "Produto.h"
#include"Fornecedor.h"
#include "Cliente.h"
#include<string>
#include<iostream>



class Gerente:public pessoa{
public:
    Gerente();
    Gerente(const Gerente& orig);
    virtual ~Gerente();
    //void cadastrar_produto(Produto&);
    //void consultar_historico(); 
    private:
    
    //void cadastrar_cliente(Cliente&);
    //void cadastrar_fornecedor(Fornecedor&);
    // void gerenciar_usuarios();
    char senha[20];
};

#endif /* GERENTE_H */

