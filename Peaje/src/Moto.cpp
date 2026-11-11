#include "Moto.h"
#include "Variante.h"
#include "Propietario.h"
#include "Exception.h"

Moto::Moto(string placa, int cilindraje) : Vehiculo(placa), cilindraje(cilindraje){
    if (placa.length() <= 0 || placa.length() > 6) {
        throw PlacaInvalidaException("La placa debe tener entre 1 y 6 caracteres");
    }
    if (cilindraje <= 0) {
        throw DatosInvalidosException("El cilindraje debe ser mayor a 0");
    }
}
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
