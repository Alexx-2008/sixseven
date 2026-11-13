#pragma once
#include "Persona.h"

using namespace std;

class Propietario : public Persona{
    private:
    bool vecino;
    public:
    Propietario();
    Propietario(string nombre, string documento, string descripcion);
    Propietario(bool vecino, string nombre, string documento, string descripcion);
    ~Propietario() override;
    void setDescuento(bool vecino) const;
    bool getDescuento() const;
    void hacerDescripcion(string descripcion) const override;
};