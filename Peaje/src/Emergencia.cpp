#include "Emergencia.h"

Emergencia::Emergencia(): unidad(""), descripcion(""), emergencia(){};
Emergencia::Emergencia(string unidad, string descripcion, bool emergencia){};
Emergencia::Emergencia(string unidad, string descripcion){};

void Emergencia::setUnidad(string unidad){this->unidad;}
void Emergencia::setDescripcion(string descripcion){this->descripcion;}
void Emergencia::setEmergencia(bool emergencia){this->emergencia;}
string Emergencia::getUnidad(){return unidad;}
string Emergencia::getDescripcion(){return descripcion;}
bool Emergencia::getEmergencia(){return emergencia;}


