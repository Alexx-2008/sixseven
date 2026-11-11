#include "Carro.h"
#include "Vehiculo.h"
#include "Bus.h"
#include "Camion.h"
#include "Moto.h"
#include "Propietario.h"
#include "Operador.h"
#include "Registro.h"
#include "Persona.h"
#include "Peaje.h"
#include "Registro.h"

int main(){
    Peaje *peaje;
    /*Vehiculo *vehiculo = new Vehiculo("");*/
    /*Persona *persona = new Persona("","","");*/
    Carro *carro = new Carro("ABC123", 4);
    Bus *bus = new Bus("DEF456", 30);
    Camion *camion = new Camion("GHI789", 6);
    Moto *moto = new Moto("JKL012", 2);
    Propietario *propietario = new Propietario("Carlos", "987654321", "Propietario");
    Operador *operador = new Operador("María", "123456789", "Operador");
    Registro *registro;
    cout<< "cuando yolabi wujujuju"<< endl;
    return 0;
};


