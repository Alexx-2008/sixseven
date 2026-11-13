#include "Moto.h"
#include "Variante.h"
#include "Propietario.h"
#include "Exception.h"

Moto::Moto(string placa, int cilindraje) : Vehiculo(placa), cilindraje(cilindraje){}
void Moto::setCilindraje(int cilindraje){
        try{
        if (cilindraje <= 0) {
        throw DatosInvalidosException("El cilindraje debe ser mayor a 0");
    }this->cilindraje = cilindraje;
}catch (const exception& e){cout<<"Error: "<<e.what()<<endl;}}
int Moto::getCilindraje()const{return cilindraje;}
void Moto::setPropietario(Propietario* propietario){this->propietario = propietario;}
string Moto::getTipo() const {
    return "Moto";
}
Moto::~Moto() {cout << "Destruyendo Moto: " << placa << endl;}
int Moto::cobrar()const{
    int tarifaBase = 3000 + (100 * unidad);
if (propietario!=nullptr && propietario->getDescuento())
    {
        int descuento=30+centena;
        tarifaBase=tarifaBase*(100-descuento)/100;   
}
return tarifaBase;}

string Moto::info() const {
    if(cilindraje>=400){
        return "Moto " + Vehiculo::info() + " Cilindraje: " + to_string(cilindraje) + " (Alto cilindraje)";
    }else{
    return "Moto " + Vehiculo::info() + " Cilindraje: " + to_string(cilindraje);
    }
}
