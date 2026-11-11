#include "Peaje.h"
#include "Vehiculo.h"
#include "Registro.h"

Peaje::Peaje(int cantidadCarros, int cantidadMotos, int cantidadBuses, int cantidadCamiones, int plataRecaudada, Operador operador, vector<Registro> registros): cantidadCarros(cantidadCarros), cantidadMotos(cantidadMotos), cantidadBuses(cantidadBuses), cantidadCamiones(cantidadCamiones), plataRecaudada(plataRecaudada), operador(operador), registros(registros){}

//sets
void Peaje::setRegistros(vector<Registro> registros){this->registros = registros;}
void Peaje::setOperador(Operador operador){this->operador = operador;}
void Peaje::setCantidadCarros(int cantidadCarros){this->cantidadCarros = cantidadCarros;}
void Peaje::setCantidadMotos(int cantidadMotos){this->cantidadMotos = cantidadMotos;}
void Peaje::setCantidadBuses(int cantidadBuses){this->cantidadBuses = cantidadBuses;}
void Peaje::setCantidadCamiones(int cantidadCamiones){this->cantidadCamiones = cantidadCamiones;}
void Peaje::setPlataRecaudada(int plataRecaudada){this->plataRecaudada = plataRecaudada;}

//gets
int Peaje::getCantidadCarros()const{return cantidadCarros;}
int Peaje::getCantidadMotos()const{return cantidadMotos;}
int Peaje::getCantidadBuses()const{return cantidadBuses;}
int Peaje::getCantidadCamiones()const{return cantidadCamiones;}
Operador* Peaje::getOperador(){return &operador;}
vector<Registro> Peaje::getRegistos()const{return registros;}

void Peaje::hacerRegistro(Registro* registro){
    string categoria = registro->getCategoria();
    if(categoria == "Carro"){
        cantidadCarros++;
    }else if(categoria == "Moto"){
        cantidadMotos++;
    }else if(categoria == "Bus"){
        cantidadBuses++;
    }else if(categoria == "Camion"){
        cantidadCamiones++;
    }
    //se hace con if pq con switch no acepta strings
}

void Peaje::cobrarPeaje(Vehiculo* vehiculo){
    int valor = vehiculo->cobrar();    
    setPlataRecaudada(valor);
    Registro* registro = new Registro(vehiculo->getPlaca(), vehiculo->getTipo(), valor);
    hacerRegistro(registro);
}

Peaje::~Peaje(){cout<<"Destruyendo peaje: ";}