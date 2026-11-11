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

class DatosInvalidosException : public exception {
   private:
   string mensaje;
   public:
   DatosInvalidosException(string mensaje);
   const char * what() const noexcept override{
      return mensaje.c_str();
   }
};

class DescuadreCajaException : public exception {
   private:
   string mensaje;
   public:
   DescuadreCajaException(string mensaje);
   const char * what() const noexcept override{
      return mensaje.c_str();
   }
};
//Placa inválida, datos inválidos y descuadre de caja