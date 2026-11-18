#pragma once
#include <string>

using namespace std;

class Emergencia{
  private:
  string unidad;
  string descripcion;
  bool emergencia;
  public:
  Emergencia();
  ~Emergencia();
  Emergencia(string unidad, string descripcion, bool emergencia);
  Emergencia(string unidad, string descripcion);
  void setUnidad(string unidad);
  void setDescripcion(string descripcion);
  void setEmergencia(bool emergencia);
  string getUnidad();
  string getDescripcion();
  bool getEmergencia();
};