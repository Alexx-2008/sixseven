#include "Moto.h"
#include "Variante.h"
#include "Propietario.h"

Moto::Moto(string placa, int cilindraje) : Vehiculo(placa), cilindraje(cilindraje){} //Pendiente excepción
//Pendiente para excepciónxd
void Moto::setCilindraje(int cilindraje){this->cilindraje = cilindraje;}
int Moto::getCilindraje()const{return cilindraje;}
Moto::~Moto() {cout << "Destruyendo moto: " << placa << endl;}
string Moto::info()const{return getTipo() + "| placa: " + placa;}
int Moto::cobrar()const{
    int tarifaBase = 3000 + (100 * unidad);
do
    if (propietario != nullptr){
        if (propietario->getDescuento()) {
        int descuento = 30 + centena;
        return tarifaBase * (100 - descuento) / 100;
     };
    }
    while (propietario==nullptr);
return tarifaBase;}

ostream &operator << (ostream &os, Vehiculo &vehiculo) {
    os << vehiculo.info() << endl;
    return os;
}


string Moto::info() const {
    return Vehiculo::info() + " | Cilindraje: " + to_string(cilindraje);
}
