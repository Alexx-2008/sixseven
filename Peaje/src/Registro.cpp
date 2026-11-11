#include "Registro.h"

Registro::Registro(string placa, string categoria, int valor){}//Excepciones 
void Registro::setPlaca(string placa){this->placa = placa;}
string Registro::getPlaca()const{return placa;}
void Registro::setCategoria(string categoria){this->categoria = categoria;}
string Registro::getCategoria()const{return categoria;}
void Registro::setValor(int valor){this->valor = valor;}
int Registro::getValor()const{return valor;}
Registro::~Registro() {cout<< "Destruyendo registro";}

void mostrarRegistro(string placa,string categoria, int valor){
    cout<< "Placa:" << placa << " Categoria: " << categoria << " Valor: " << valor << endl;
}
