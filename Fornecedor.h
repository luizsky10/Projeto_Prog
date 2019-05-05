/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fornecedor.h
 * Author: luiz
 *
 * Created on May 5, 2019, 6:38 PM
 */

#ifndef FORNECEDOR_H
#define FORNECEDOR_H
#include<string>
#include<iostream>

class Fornecedor {
public:
    Fornecedor();
    Fornecedor(const Fornecedor& orig);
    virtual ~Fornecedor();
    void SetTelefone(char telefone);
    char GetTelefone() const;
    void SetEndereco(char endereco);
    char GetEndereco() const;
    void SetCnpj(int cnpj);
    int GetCnpj() const;
    void SetNome(char nome);
    char GetNome() const;
private:
    char nome;
    int cnpj;
    char endereco;
    char telefone;
    
};

#endif /* FORNECEDOR_H */

