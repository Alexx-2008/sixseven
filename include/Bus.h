#pragma once
#include "Vehiculo.h"

using namespace std;

class Bus: public Vehiculo{
    private:
    int puestos;
    public:
    Bus(string placa, int puestos);
    ~Bus();
    void setPuestos(int puestos);
    int getPuestos() const;
    string info() const override;
    int cobrar() const override;
}
