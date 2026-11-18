#pragma once
#include <string>
#include "Vehiculo.h"
#include "Emergencia.h"

using namespace std;

class Ambulancia : public Vehiculo, public Emergencia{
public:
Ambulancia();
Ambulancia(string placa, string unidad, string descripcion);
~Ambulancia();
int cobrar() const override;
void setPropietario(Propietario* propietario);
string getTipo() const override;
};