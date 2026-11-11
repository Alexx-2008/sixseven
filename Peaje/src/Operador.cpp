#include "Operador.h"

Operador::Operador(string codigo, string nombre, string documento, string descripcion): Persona(nombre, documento, descripcion), codigo(codigo){}
void Operador::setCodigo(string codigo) const{this->codigo == codigo;}   
void Operador::hacerDescripcion(string descripcion) const{this->descripcion == descripcion;}
string Operador::getCodigo() const{return codigo;}

Operador::~Operador(){cout<<"Destruyendo: ";}
