#include "Persona.h"

Persona::Persona(): nombre("Alets"), documento("123456"), descripcion("sicseben"){}
Persona::Persona(string nombre, string documento, string descripcion){}

void Persona::setNombre(string nombre){this->nombre = nombre;}
void Persona::setDocumento(string documento){this->documento = documento;}
void Persona::hacerDescripcion(string descripcion)const{this->descripcion == descripcion;} //se ponen 2 = porque al ser un const y virtual como q cambia la cosa 
string Persona::getNombre() const{return nombre;}
string Persona::getDocumento() const{return documento;}
string Persona::getDescripcion() const{return descripcion;}

Persona::~Persona(){cout<<"Destruyendo: ";}
