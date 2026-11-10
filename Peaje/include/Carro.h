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
 void setPasajeros(int pasajeros);
 int getPasajeros() const;
 string info() const override;
 int cobrar() const override;
};
