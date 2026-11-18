#include "Ambulancia.h"
#include "Variante.h"

Ambulancia::Ambulancia(string placa, string unidad, string descripcion): Vehiculo(placa), Emergencia(unidad, descripcion){}
void Ambulancia::setPropietario(Propietario* propietario){this->propietario = propietario;}
Ambulancia::~Ambulancia() {cout << "Destruyendo Ambulancia: " << placa << endl;}
int Ambulancia::cobrar()const{
    int tarifaBase = 10000 + (200 * UNIDAD);
    if (propietario != nullptr){
        if (propietario->getDescuento()) {
        int descuento = 30 + CENTENA;
        return tarifaBase * (100 - descuento) / 100;
     };
    }
return tarifaBase;}