#include "Operador.h"

Operador::Operador(): Persona("","",""){}
Operador::Operador(string nombre, string documento, string descripcion): Persona(nombre, documento, descripcion){}
void Operador::setCodigo(string codigo) const{this->codigo == codigo;}   
void Operador::hacerDescripcion(string descripcion) const{this->descripcion == descripcion;}
string Operador::getCodigo() const{return codigo;}

Operador::~Operador(){cout<<"Destruyendo: ";}