#pragma once
#include <exception>
#include <string>

using namespace std;

class PlacaInvalidaException : public exception {
   private:
   string mensaje;
   public:
   PlacaInvalidaException(string mensaje);
   const char * what() const noexcept override{
      return mensaje.c_str();
   }
};
//Placa inválida, datos inválidos y descuadre de caja