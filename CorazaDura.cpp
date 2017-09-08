#include "CorazaDura.h"
#include "Soldado.h"

CorazaDura::CorazaDura(){

}

CorazaDura::CorazaDura(string pNombre, string pCiudad, int pEdad, int pDureza, int pNumLanza){
	this->Nombre = pNombre;
	this->Ciudad = pCiudad;
	this->Edad = pEdad;
	this->Dureza = pDureza;
	this->NumLanza = pNumLanza;
}

void CorazaDura::setDureza(int pDureza){
	this->Dureza = pDureza;
}

int CorazaDura::getDureza(){
	return Dureza;
}

void CorazaDura::setNumLanza(int pNumLanza){
	this->NumLanza = pNumLanza;
}

int CorazaDura::getNumLanza(){
	return NumLanza;
}

int CorazaDura::Ataque(){
	return NumLanza;
}

int CorazaDura::Defensa(){
	return Dureza;
}

CorazaDura::~CorazaDura(){

}
