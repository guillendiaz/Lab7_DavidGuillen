#include "Arquero.h"
#include "Soldado.h"

Arquero::Arquero(){

}

Arquero::Arquero(string pNombre, string pCiudad, int pEdad, int pNumFlechas, int pPrecision){
	this->Nombre = pNombre;
	this->Ciudad = pCiudad;
	this->Edad = pEdad;
	this->NumFlechas = pNumFlechas;
	this->Precision = pPrecision;
}

void Arquero::setNumFlechas(int pNumFlechas){
	this->NumFlechas = pNumFlechas;
}

int Arquero::getNumFlechas(){
	return NumFlechas;
}

void Arquero::setPrecision(int pPrecision){
	this->Precision = pPrecision;
}

int Arquero::getPrecision(){
	return Precision;
}

double Arquero::Ataque(){
	return NumFlechas * (Precision / 1000);
}

double Arquero::Defensa(){
	return 0;
}

Arquero::~Arquero(){

}
