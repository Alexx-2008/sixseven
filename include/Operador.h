#pragma once
#include "Persona.h"

using namespace std;

class Operador : public Persona{
    private: 
    string codigo;
    public:
    Operador(string codigo);
    ~Operador();
    void setCodigo(string codigo) const;
    string getCodigo() const;
    string hacerDescripcion(string descripcion) const override;
};