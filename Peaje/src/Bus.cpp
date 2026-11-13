#include "Bus.h"
#include "Variante.h"
#include "Propietario.h"
#include "Exception.h"

Bus::Bus(string placa, int puestos) : Vehiculo(placa), puestos(puestos){
 try{
    if (puestos <= 0) {
        throw DatosInvalidosException("El número de puestos debe ser mayor que cero");
    }
}catch (const exception& e){cout<<"Error: "<<e.what()<<endl;} }

void Bus::setPuestos(int puestos){this->puestos = puestos;}
int Bus::getPuestos()const{return puestos;}
Bus::~Bus() {cout << "Destruyendo Bus: " << placa << endl;}
int Bus::cobrar()const{
    int tarifaBase = 14000 + (300 * decena);
        return tarifaBase;} 

string Bus::info() const{
    return "Bus " + Vehiculo::info() + " Puestos: " + to_string(puestos); 
}
