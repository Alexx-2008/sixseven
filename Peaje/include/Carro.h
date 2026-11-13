#pragma once
#include "Vehiculo.h"

using namespace std;

class Carro : public Vehiculo{
 private:
 int pasajeros;
 public:
 Carro();
 Carro(string placa, int pasajeros);
 Carro(string placa, int pasajeros, Propietario propietario);
 ~Carro();
 void setPasajeros(int);
 int getPasajeros() const;
 void setPropietario(Propietario* propietario);
 string info() const override;
 int cobrar() const override;
};
