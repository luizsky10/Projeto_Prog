#include "pessoa.h"

pessoa::pessoa() {
}

pessoa::pessoa(const pessoa& orig) {
}

pessoa::~pessoa() {
}

void pessoa::SetSexo(char sexo) {
    this->sexo = sexo;
}

char& pessoa::GetSexo() const {
    return sexo;
}

void pessoa::SetNome(char nome) {
    this->nome = nome;
}

char& pessoa::GetNome() const {
    return nome;
}


