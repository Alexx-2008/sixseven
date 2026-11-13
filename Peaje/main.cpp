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

    Propietario *vecino = new Propietario(true, "Carlos", "987654321", "Soy vecino");
    Propietario *noVecino = new Propietario(false, "Yarbis", "12345678", "No soy vecino");

    Carro *carro = new Carro("ABC123", 3);
    Bus *bus = new Bus("BUS777", 38);
    Camion *camion = new Camion("CAM301", 3);
    Moto *moto = new Moto("XYZ45A", 125);

    Operador *operador = new Operador("2","María", "123456789", "Operador");
    Registro *registro = new Registro("","",0);

    cout<<"Caso 1"<<endl;
    carro->setPropietario(noVecino);
    peaje->cobrarPeaje(carro);

    cout<<"Caso 2"<<endl;
    carro->setPropietario(vecino);
    peaje->cobrarPeaje(carro);
 
    cout<<"Caso 3"<<endl;
    moto->setPropietario(vecino);
    peaje->cobrarPeaje(moto);

    cout<<"Caso 4"<<endl;
    moto->setPlaca("MOT650");
    moto->setCilindraje(650);
    peaje->cobrarPeaje(moto);

    cout<<"Caso 5"<< endl;
    peaje->cobrarPeaje(bus);

    cout<<"caso 6"<< endl;
    peaje->cobrarPeaje(camion);

    cout<<"caso 7"<< endl;
    camion->setEjes(3+1);
    peaje->cobrarPeaje(camion);

    cout<<"caso 8"<<endl;
    return 0;
};


