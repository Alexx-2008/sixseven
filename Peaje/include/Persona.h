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
    Persona();
    Persona(string nombre, string documento, string descripcion);
    virtual ~Persona();
    string getNombre() const;
    string getDocumento() const;
    virtual string getDescripcion() const;
    void setNombre(string nombre);
    void setDocumento(string documento);     
    virtual void hacerDescripcion(string descripcion) const;
};