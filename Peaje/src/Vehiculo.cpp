#include "Vehiculo.h"


Vehiculo::Vehiculo(): placa(""), propietario(nullptr){}
Vehiculo::Vehiculo(string placa){}
//Pendiente para excepciónxd
void Vehiculo::setPlaca(string placa){}//Pendiente de excepción
void Vehiculo::setPropietario(Propietario* propietario){this->propietario = propietario;}
string Vehiculo::getPlaca()const{return placa;}
Propietario* Vehiculo::getPropietario()const{return propietario;}

Vehiculo::~Vehiculo(){cout<<"Destruyendo: ";}
string Vehiculo::getTipo()const{return "Vehiculo: ";}
string Vehiculo::info()const{return getTipo() + "| placa: " + placa;}
int Vehiculo::cobrar()const{}

ostream &operator << (ostream &os, Vehiculo &vehiculo) {
    os << vehiculo.info() << endl;
    return os;
}




