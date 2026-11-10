#pragma once
#include <string>
#include <iostream>

using namespace std;

class Registro{
    private:
    string placa;
    string categoria;
    int valor;
    public:
    Registro(string placa, string categoria, int valor);
    ~Registro();
    string getPlaca() const;   
    string getCategoria() const;
    int getValor() const;
    void setPlaca(string placa);
    void setCategoria(string categoria);
    void setValor(int valor);
};