#pragma once
#include "Vehiculo.h"

using namespace std;

class Camion : public Vehiculo{
    private:
    int ejes;
    public:
    Camion(string placa, int ejes);
    ~Camion();
    void setEjes(int ejes);
    int getEjes() const;
    string info() const override;
    int cobrar() const override;
};