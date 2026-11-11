#pragma once
#include <string>
#include <vector>
#include "Operador.h"
#include "Registro.h"
#include "Vehiculo.h"
class Peaje {
    private:
    vector<Registro> registros;
    Operador operador;
    int cantidadCarros;
    int cantidadMotos;
    int cantidadBuses;
    int cantidadCamiones;
    int plataRecaudada;
    Vehiculo* vehiculo;
    public:
    Peaje();
    Peaje(int cantidadCarros, int cantidadMotos, int cantidadBuses, int cantidadCamiones, int plataRecaudada, Operador operador, vector<Registro> registros, Vehiculo* vehiculo);
    Peaje(Operador operador);
    ~Peaje();
    vector<Registro> getRegistos() const;
    Operador*getOperador() ;
    
    void setRegistros(vector<Registro> registros);
    void setOperador(Operador operador);
    int getCantidadCarros() const;
    void setCantidadCarros(int cantidadCarros);
    int getCantidadMotos() const;
    void setCantidadMotos(int cantidadMotos);
    int getCantidadBuses() const;
    void setCantidadBuses(int cantidadBuses);
    int getCantidadCamiones() const;
    void setCantidadCamiones(int cantidadCamiones);
    int getPlataRecaudada() const;
    void setPlataRecaudada(int plataRecaudada);


    void cobrarPeaje(Vehiculo* vehiculo);
    void hacerRegistro(Registro* registro);
};