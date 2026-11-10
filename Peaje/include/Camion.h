#pragma once
#include "Vehiculo.h"

using namespace std;

class Camion : public Vehiculo{
    private:
    int ejes;
    public:
    Camion();
    Camion(string placa, int ejes);
    Camion(string placa, int ejes, Propietario propietario);
    ~Camion();
    void setEjes(int ejes);
    int getEjes() const;
    string info() const override;
    int cobrar() const override;
};