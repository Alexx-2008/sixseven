#pragma once
#include "Vehiculo.h"

using namespace std;

class Bus: public Vehiculo{
    private:
    int puestos;
    public:
    Bus();
    Bus(string placa, int puestos);
    Bus(string placa, int puestos, Propietario propietario);
    ~Bus();
    void setPuestos(int puestos);
    int getPuestos() const;
    void setPropietario(Propietario* propietario);
    string info() const override;
    int cobrar() const override;
};
