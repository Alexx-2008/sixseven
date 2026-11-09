#pragma once
#include "Persona.h"

using namespace std;

class Propietario : public Persona{
    private:
    bool vecino;
    public:
    Propietario(bool vecino);
    ~Propietario();
    void setDescuento(bool vecino) const;
    bool getDescuento() const;
    string hacerDescripcion() const override;
};