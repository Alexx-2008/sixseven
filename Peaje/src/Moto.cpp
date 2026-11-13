#include "Moto.h"
#include "Variante.h"
#include "Propietario.h"
#include "Exception.h"

Moto::Moto(string placa, int cilindraje) : Vehiculo(placa), cilindraje(cilindraje){
    try{
        if (cilindraje <= 0) {
        throw DatosInvalidosException("El cilindraje debe ser mayor a 0");
    }
}catch (const exception& e){cout<<"Error: "<<e.what()<<endl;}
}
void Moto::setCilindraje(int cilindraje){this->cilindraje = cilindraje;}
int Moto::getCilindraje()const{return cilindraje;}
void Moto::setPropietario(Propietario* propietario){this->propietario = propietario;}
Moto::~Moto() {cout << "Destruyendo moto: " << placa << endl;}
int Moto::cobrar()const{
    int tarifaBase = 3000 + (100 * unidad);
if (propietario!=nullptr && propietario->getDescuento())
    {
        int descuento=30+centena;
        tarifaBase=tarifaBase*descuento/100;   
}
return tarifaBase;}

string Moto::info() const {
    if(cilindraje>=400){
        return "Moto " + Vehiculo::info() + " Cilindraje: " + to_string(cilindraje) + " (Alto cilindraje)";
    }else{
    return "Moto " + Vehiculo::info() + " Cilindraje: " + to_string(cilindraje);
    }
}
