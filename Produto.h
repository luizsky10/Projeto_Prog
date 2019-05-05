/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Produto.h
 * Author: luiz
 *
 * Created on May 5, 2019, 6:27 PM
 */

#ifndef PRODUTO_H
#define PRODUTO_H
#include "Fornecedor.h"
#include<string>
#include<iostream>

class Produto {
public:
    Produto();
    Produto(const Produto& orig);
    virtual ~Produto();
    void SetEstq_min(int estq_min);
    int GetEstq_min() const;
    void SetQtd(int qtd);
    int GetQtd() const;
    void SetFornec(Fornecedor fornec);
    Fornecedor GetFornec() const;
    void SetContra_indicacao(char contra_indicacao);
    char GetContra_indicacao() const;
    void SetDescricao(char descricao);
    char GetDescricao() const;
    void SetValor(float valor);
    float GetValor() const;
    void SetNome(char nome);
    char GetNome() const;
    void SetCod(int cod);
    int GetCod() const;
private:
    int cod;
    char nome;
    float valor;
    char descricao;
    char contra_indicacao;
    Fornecedor fornec;
    int qtd;
    int estq_min;
};

#endif /* PRODUTO_H */

