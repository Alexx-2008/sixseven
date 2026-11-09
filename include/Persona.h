#pragma once
#include <iostream>
#include <string>

using namespace std;

class Persona{
    protected:
    string nombre;
    string documento;
    string descripcion;
    public:
    Persona(string nombre, string documento, string descripcion);
    string getNombre() const;
    string getDocumento() const;
    virtual string getDescripcion() const;
    void setNombre(string nombre);
    void setDocumento(string documento);     
    virtual string hacerDescrpicion() const;
};