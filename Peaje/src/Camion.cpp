#include "Camion.h"
#include "Variante.h"
#include "Propietario.h"
#include "Exception.h"

Camion::Camion(string placa, int ejes) : Vehiculo(placa), ejes(ejes){
try{
    if (ejes <= 2) {
        throw DatosInvalidosException("El número de ejes debe ser mayor que dos");
    }
   }catch (const exception& e){cout<<"Error: "<<e.what()<<endl;}
}
 
void Camion::setEjes(int ejes){this->ejes = ejes;}
int Camion::getEjes()const{return ejes;}
void Camion::setPropietario(Propietario* propietario){this->propietario = propietario;}
Camion::~Camion() {cout << "Destruyendo camion: " << placa << endl;}
int Camion::cobrar()const{
    int tarifaBase = 8000 + (100 * decena);
        return tarifaBase * ejes;
     };

string Camion::info() const {
    return "Camion " + Vehiculo::info() + " Ejes: " + to_string(ejes);
}
