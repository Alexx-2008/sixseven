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
    Peaje *peaje = new Peaje(); 

    Propietario *Vecino = new Propietario(true, "Carlos", "987654321", "Soy vecino");
    Propietario *Novecino = new Propietario(false, "Yarbis", "12345678", "No soy vecino");

    /*Vehiculo *vehiculo = new Vehiculo("");*/
    /*Persona *persona = new Persona("","","");*/
    Carro *carro = new Carro("ABC123", 3);
    Bus *bus = new Bus("DEF456", 30);
    Camion *camion = new Camion("GHI789", 6);
    Moto *moto = new Moto("JKL012", 2);
    Operador *operador = new Operador("2","María", "123456789", "Operador");
    Registro *registro = new Registro("","",0);
    cout<< "cuando yolabi wujujuju"<< endl;
    return 0;
};


