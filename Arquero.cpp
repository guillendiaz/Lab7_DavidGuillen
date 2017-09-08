#include "Arquero.h"
#include "Soldado.h"
#include <iostream>
using namespace std;
Arquero::Arquero(){

}

Arquero::Arquero(string pNombre, string pCiudad, int pEdad, double pNumFlechas, double pPrecision){
	this->Nombre = pNombre;
	this->Ciudad = pCiudad;
	this->Edad = pEdad;
	this->NumFlechas = pNumFlechas;
	this->Precision = pPrecision;
}

void Arquero::setNumFlechas(double pNumFlechas){
	this->NumFlechas = pNumFlechas;
}

double Arquero::getNumFlechas(){
	return NumFlechas;
}

void Arquero::setPrecision(double pPrecision){
	this->Precision = pPrecision;
}

double Arquero::getPrecision(){
	return Precision;
}

double Arquero::Ataque(){
	return NumFlechas *(Precision / 1000.0);
}

double Arquero::Defensa(){
	return 0;
}

Arquero::~Arquero(){

}
