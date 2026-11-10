#include "Persona.h"

Persona::Persona(): nombre("Alets"), documento("123456"), descripcion("sicseben"){}
Persona::Persona(string nombre, string documento, string descripcion){}

void Persona::setNombre(string nombre){this->nombre = nombre;}
void Persona::setDocumento(string documento){this->documento = documento;}
void Persona::hacerDescripcion(string descripcion){this->descripcion = descripcion;}
string Persona::getNombre() const{return nombre;}
string Persona::getDocumento() const{return documento;}
string Persona::getDescripcion() const{return descripcion;}

Persona::~Persona(){cout<<"Destruyendo: ";}
