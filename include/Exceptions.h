#pragma once
#include <exception>
#include <string>

using namespace std;

class PlacaInvalidaException : public exception (
   private:
   string mensaje;
   public:
   PlacaInvalidaException(string mensaje);
   const char * what() const noexcept override;
)