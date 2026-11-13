#include "Carro.h"
#include "Variante.h"
#include "Propietario.h"
#include "Exception.h"

Carro::Carro(string placa, int pasajeros) : Vehiculo(placa), pasajeros(pasajeros){} 
void Carro::setPasajeros(int pasajeros){
    try{
    if (pasajeros <= 0) {
        throw DatosInvalidosException("El número de pasajeros debe ser mayor que cero");
    }this->pasajeros = pasajeros;
}catch (const exception& e){cout<<"Error: "<<e.what()<<endl;}}
int Carro::getPasajeros()const{return pasajeros;}
string Carro::getTipo() const {
    return "Carro";
}
void Carro::setPropietario(Propietario* propietario){this->propietario = propietario;}
Carro::~Carro() {cout << "Destruyendo Carro: " << placa << endl;}
int Carro::cobrar()const{
    int tarifaBase = 10000 + (200 * unidad);
    if (propietario != nullptr){
        if (propietario->getDescuento()) {
        int descuento = 30 + centena;
        return tarifaBase * (100 - descuento) / 100;
     };
    }
return tarifaBase;}

string Carro::info() const {
    return "Carro" + Vehiculo::info() + " Pasajeros: " + to_string(pasajeros);
}
