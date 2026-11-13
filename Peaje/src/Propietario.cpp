#include "Propietario.h"

Propietario::Propietario(bool vecino, string nombre, string documento, string descripcion): Persona(nombre, documento, descripcion), vecino(vecino){}
void Propietario::setDescuento(bool vecino) const{this->vecino == vecino;}
bool Propietario::getDescuento() const{return vecino;}
void Propietario::hacerDescripcion(string descripcion) const{this->descripcion == descripcion;}


Propietario::~Propietario(){cout<<"Destruyendo Propietario: "<<nombre<<endl;}
