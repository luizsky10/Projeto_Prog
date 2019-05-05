/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fornecedor.cpp
 * Author: luiz
 * 
 * Created on May 5, 2019, 6:38 PM
 */

#include "Fornecedor.h"

Fornecedor::Fornecedor() {
}

Fornecedor::Fornecedor(const Fornecedor& orig) {
}

Fornecedor::~Fornecedor() {
}

void Fornecedor::SetTelefone(char telefone) {
    this->telefone = telefone;
}

char Fornecedor::GetTelefone() const {
    return telefone;
}

void Fornecedor::SetEndereco(char endereco) {
    this->endereco = endereco;
}

char Fornecedor::GetEndereco() const {
    return endereco;
}

void Fornecedor::SetCnpj(int cnpj) {
    this->cnpj = cnpj;
}

int Fornecedor::GetCnpj() const {
    return cnpj;
}

void Fornecedor::SetNome(char nome) {
    this->nome = nome;
}

char Fornecedor::GetNome() const {
    return nome;
}

