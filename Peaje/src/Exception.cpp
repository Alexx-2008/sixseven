#include "Exception.h"

PlacaInvalidaException::PlacaInvalidaException(string mensaje) : mensaje(mensaje) {}
DatosInvalidosException::DatosInvalidosException(string mensaje) : mensaje(mensaje) {}
DescuadreCajaException::DescuadreCajaException(string mensaje) : mensaje(mensaje) {}

const char* PlacaInvalidaException::what() const noexcept{
      return mensaje.c_str();
}

const char* DatosInvalidosException::what() const noexcept{
      return mensaje.c_str();
}

const char* DescuadreCajaException::what() const noexcept{
      return mensaje.c_str();
}