#pragma once
#include <exception>
#include <string>

using namespace std;

class PlacaInvalidaException : public exception {
   private:
   string mensaje;
   public:
   PlacaInvalidaException(string);
   const char* what() const noexcept override;
};

class DatosInvalidosException : public exception {
   private:
   string mensaje;
   public:
   DatosInvalidosException(string);
   const char* what() const noexcept override;
};
//Placa inválida, datos inválidos y (descuadre de caja) El profe dijo q no descuadre