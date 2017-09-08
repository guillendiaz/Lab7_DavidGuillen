#include "Soldado.h"
#include <string>
#include <iostream>
using namespace std;
Soldado::Soldado(){

}

Soldado::Soldado(string pNombre, string pCiudad, int pEdad){
	this->Nombre = pNombre;
	this->Ciudad = pCiudad;
	this->Edad = pEdad;
}

void Soldado::setNombre(string pNombre){
	this->Nombre = pNombre;
}

string Soldado::getNombre(){
	return Nombre;
}

void Soldado::setCiudad(string pCiudad){
	this->Ciudad = pCiudad;
}

string Soldado::getCiudad(){
	return Ciudad;
}

void Soldado::setEdad(int pEdad){
	this->Edad = pEdad;
}

int Soldado::getEdad(){
	return Edad;
}

Soldado::~Soldado(){

}
