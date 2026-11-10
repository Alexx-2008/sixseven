#pragma once
#include <iostream>
#include <string>
#include "Propietario.h"
using namespace std;

class Vehiculo{
    protected:
    string placa;
    Propietario *propietario;
    public:
    Vehiculo ();
    Vehiculo (string placa);
    Vehiculo (string placa, Propietario propietario);
    virtual string getTipo() const;
    Propietario* getPropietario() const;
    void setPropietario(Propietario* propietario);
    string getPlaca() const;
    void setPlaca(string placa);
    virtual string info() const;
    virtual int cobrar() const;
};

ostream &operator << (ostream &os,Vehiculo &unVehiculo);