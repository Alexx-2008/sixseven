#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehiculo{
    protected:
    string placa;
    public:
    Vehiculo (string placa);
    virtual string getTipo();
    string getPlaca() const;
    void setPlaca();
    virtual string info() const;
    virtual int cobrar() const;
};

ostream &operator << (ostream &os, &unVehiculo);