#pragma once
#include "Vehiculo.h"

using namespace std;

class Moto : public Vehiculo{
 private:
 int cilindraje;
 public:
 Moto();
 Moto(string placa, int cilindraje);
 Moto(string placa, int cilindraje, Propietario propietario);
 ~Moto();
 void setCilindraje(int cilindraje);
 int getCilindraje() const;
 void setPropietario(Propietario* propietario);
 string getTipo() const override;
 string info() const override;
 int cobrar() const override;
};