#ifndef PESSOA_H
#define PESSOA_H

class pessoa {
public:
    pessoa();
    pessoa(const pessoa& orig);
    virtual ~pessoa();
    void SetSexo(char&);
    char& GetSexo() const;
    void SetNome(char&);
    char& GetNome() const;

private:
    int idade;
    char nome;
    char sexo;

};

#endif /* PESSOA_H */


