#include "Camion.h"
#include "Variante.h"
#include "Propietario.h"
#include "Exception.h"

Camion::Camion(string placa, int ejes) : Vehiculo(placa), ejes(ejes){}
 
void Camion::setEjes(int ejes){try{
    if (ejes <= 2) {
        throw DatosInvalidosException("El numero de ejes debe ser mayor que dos");
    }this->ejes = ejes;
   }catch (const exception& e){cout<<"Error: "<<e.what()<<endl;}
}
int Camion::getEjes()const{return ejes;}
void Camion::setPropietario(Propietario* propietario){this->propietario = propietario;}
string Camion::getTipo() const {
    return "Camion";
}
Camion::~Camion() {cout << "Destruyendo camion: " << placa << endl;}
int Camion::cobrar()const{
    int tarifaBase = 8000 + (100 * decena);
        return tarifaBase * ejes;
     };

string Camion::info() const {
    return "Camion " + Vehiculo::info() + " Ejes: " + to_string(ejes);
}
