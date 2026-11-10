#pragma once
#include <string>
#include <iostream>

using namespace std;

class Registro{
    private:
    string placa;
    string categoria;
    string valor;
    public:
    Registro(string placa, string categoria, string valor);
    ~Registro();
    string getPlaca() const;   
    string getCategoria() const;
    string getValor() const;
    void setPlaca(string placa);
    void setCategoria(string categoria);
    void setValor(string valor);
};