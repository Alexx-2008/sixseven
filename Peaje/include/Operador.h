#pragma once
#include "Persona.h"

using namespace std;

class Operador : public Persona{
    private: 
    string codigo;
    public:
    Operador();
    Operador(string codigo, string nombre, string documento, string descripcion);
    Operador(string nombre, string documento, string descripcion);
    ~Operador();
    void setCodigo(string codigo) const;
    string getCodigo() const;
    void hacerDescripcion(string descripcion) const override;
};