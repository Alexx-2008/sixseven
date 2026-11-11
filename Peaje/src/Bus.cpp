#include "Bus.h"
#include "Variante.h"
#include "Propietario.h"
#include "Exception.h"

Bus::Bus(string placa, int puestos) : Vehiculo(placa), puestos(puestos){
 if (placa.length() <= 0 || placa.length() > 6) {
        throw PlacaInvalidaException("La placa debe tener entre 1 y 6 caracteres");
    }
    if (puestos <= 0) {
        throw DatosInvalidosException("El número de puestos debe ser mayor que cero");
    }
} 
void Bus::setPuestos(int puestos){this->puestos = puestos;}
int Bus::getPuestos()const{return puestos;}
Bus::~Bus() {cout << "Destruyendo Bus: " << placa << endl;}
string Bus::info()const{return getTipo() + "| placa: " + placa;}
int Bus::cobrar()const{
    int tarifaBase = 14000 + (300 * decena);
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

string Bus::info() const {
    return Vehiculo::info() + " | Pasajeros: " + to_string(puestos);
}
