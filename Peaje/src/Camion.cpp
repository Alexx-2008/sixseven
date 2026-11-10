#include "Camion.h"
#include "Variante.h"
#include "Propietario.h"

Camion::Camion(string placa, int ejes) : Vehiculo(placa), ejes(ejes){} //Pendiente excepción
void Camion::setEjes(int ejes){this->ejes = ejes;}
int Camion::getEjes()const{return ejes;}
Camion::~Camion() {cout << "Destruyendo camion: " << placa << endl;}
string Camion::info()const{return getTipo() + "| placa: " + placa;}
int Camion::cobrar()const{
    int tarifaBase = 8000 + (100 * decena);
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


string Camion::info() const {
    return Vehiculo::info() + " | Ejes: " + to_string(ejes);
}
