/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cliente.cpp
 * Author: luiz
 * 
 * Created on May 5, 2019, 6:27 PM
 */

#include "Cliente.h"

Cliente::Cliente() {
}

Cliente::Cliente(const Cliente& orig) {
}

Cliente::~Cliente() {
}

void Cliente::SetTelefone(char telefone) {
    this->telefone = telefone;
}

char Cliente::GetTelefone() const {
    return telefone;
}

void Cliente::SetCpf(int cpf) {
    this->cpf = cpf;
}

int Cliente::GetCpf() const {
    return cpf;
}

