#pragma once
#include <string>
#include <vector>
#include "Operador.h"
#include "Registro.h"

class Peaje {
    private:
    vector<Registro> registros;
    Operador operador;
    int cantidadVehiculos;
    double plataRecaudada;
    public:
    Peaje(Operador operador);
    ~Peaje();
    vector<Registro> getRegistos() const;
    Operador getOperador() const;
    void setRegistros(vector<Registro> registros);
    void setOperador(Operador operador);
    int getCantidadVehiculos() const;
    void setCantidadVehiculos(int cantidadVehiculos);
    double getPlataRecaudada() const;
    void setPlataRecaudada(double plataRecaudada);
};