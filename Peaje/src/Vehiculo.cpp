#include "Vehiculo.h"
#include "Variante.h"
#include "Exception.h"

Vehiculo::Vehiculo(): placa(""), propietario(nullptr){}
Vehiculo::Vehiculo(string placa){this->placa = placa;}
void Vehiculo::setPlaca(string placa){
    try{
        if (placa.length() <= 0 || placa.length() > 6) {
        throw PlacaInvalidaException("La placa debe tener entre 1 y 6 caracteres");}
    }catch (const exception& e){cout<<"Error: "<<e.what()<<endl;} 
    this->placa = placa;}
void Vehiculo::setPropietario(Propietario* propietario){this->propietario = propietario;}
string Vehiculo::getPlaca()const{
    try{
        if (placa.length() <= 0 || placa.length() > 6) {
        throw PlacaInvalidaException("La placa debe tener entre 1 y 6 caracteres");}
    }catch (const exception& e){cout<<"Error: "<<e.what()<<endl;}
    return placa;}
Propietario* Vehiculo::getPropietario()const{return propietario;}

Vehiculo::~Vehiculo(){cout<<"Destruyendo: ";}
string Vehiculo::getTipo()const{return "Vehiculo: ";}
string Vehiculo::info()const{return " placa: " + getPlaca();}
int Vehiculo::cobrar()const{}

ostream &operator << (ostream &os, Vehiculo &vehiculo) {
    os << vehiculo.info() << endl;
    return os;
}




