/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Produto.cpp
 * Author: luiz
 * 
 * Created on May 5, 2019, 6:27 PM
 */

#include "Produto.h"

Produto::Produto() {
}

Produto::Produto(const Produto& orig) {
}

Produto::~Produto() {
}

void Produto::SetEstq_min(int estq_min) {
    this->estq_min = estq_min;
}

int Produto::GetEstq_min() const {
    return estq_min;
}

void Produto::SetQtd(int qtd) {
    this->qtd = qtd;
}

int Produto::GetQtd() const {
    return qtd;
}

void Produto::SetFornec(Fornecedor fornec) {
    this->fornec = fornec;
}

Fornecedor Produto::GetFornec() const {
    return fornec;
}

void Produto::SetContra_indicacao(char contra_indicacao) {
    this->contra_indicacao = contra_indicacao;
}

char Produto::GetContra_indicacao() const {
    return contra_indicacao;
}

void Produto::SetDescricao(char descricao) {
    this->descricao = descricao;
}

char Produto::GetDescricao() const {
    return descricao;
}

void Produto::SetValor(float valor) {
    this->valor = valor;
}

float Produto::GetValor() const {
    return valor;
}

void Produto::SetNome(char nome) {
    this->nome = nome;
}

char Produto::GetNome() const {
    return nome;
}

void Produto::SetCod(int cod) {
    this->cod = cod;
}

int Produto::GetCod() const {
    return cod;
}

