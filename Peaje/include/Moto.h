#pragma once
#include "Vehiculo.h"

using namespace std;

class Moto : public Vehiculo{
 private:
 int cilindraje;
 public:
 Moto(string placa, int cilindraje);
 ~Moto();
 void setPasajeros(int cilindraje);
 int getPasajeros() const;
 string info() const override;
 int cobrar() const override;
};