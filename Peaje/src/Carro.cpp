#include "Carro.h"
#include "Variante.h"
#include "Propietario.h"
#include "Exception.h"

Carro::Carro(string placa, int pasajeros) : Vehiculo(placa), pasajeros(pasajeros){
    if (placa.length() <= 0 || placa.length() > 6) {
        throw PlacaInvalidaException("La placa debe tener entre 1 y 6 caracteres");
    }
    if (pasajeros <= 0) {
        throw DatosInvalidosException("El número de pasajeros debe ser mayor que cero");
    }
} //Pendiente excepción
void Carro::setPasajeros(int pasajeros){this->pasajeros = pasajeros;}
int Carro::getPasajeros()const{return pasajeros;}
Carro::~Carro() {cout << "Destruyendo carro: " << placa << endl;}
int Carro::cobrar()const{
    int tarifaBase = 10000 + (200 * unidad);

do
    if (propietario != nullptr){
        if (propietario->getDescuento()) {
        int descuento = 30 + centena;
        return tarifaBase * (100 - descuento) / 100;
     };
    }
    while (propietario==nullptr);
if (propietario!=nullptr && propietario->getDescuento())
    {
        int descuento=30+centena;
        tarifaBase=tarifaBase*descuento/100;   
}
return tarifaBase;}


string Carro::info() const {
    return Vehiculo::info() + " | Pasajeros: " + to_string(pasajeros);
}
