#include "EscuadronTerrestres.h"
#include "Soldado.h"
#include <vector>
#include <string>

using namespace std;

EscuadronTerrestres::EscuadronTerrestres(){

}

EscuadronTerrestres::EscuadronTerrestres(string pNombre){
	this->Nombre = pNombre;
}

void EscuadronTerrestres::setNombre(string pNombre){
	this->Nombre = pNombre;
}

string EscuadronTerrestres::getNombre(){
	return Nombre;
}

void EscuadronTerrestres::addSoldado(Soldado* RetSol){
	Soldados.push_back(RetSol);
}

Soldado* EscuadronTerrestres::getSoldado(int n){
	if (dynamic_cast<Soldado*>(Soldados.at(n))){
		Soldado* RetVal = static_cast<Soldado*>(Soldados.at(n));
		return RetVal;
	}
	return NULL;
}

EscuadronTerrestres::~EscuadronTerrestres(){
	
}