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

void EscuadronTerrestres::setBando(string pBando){
	this->Bando = pBando;
}

string EscuadronTerrestres::getBando(){
	return Bando;
}

void EscuadronTerrestres::setTipo(string pTipo){
	this->Tipo = pTipo;
}

string EscuadronTerrestres::getTipo(){
	return Tipo;
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

int EscuadronTerrestres::Ataque(){
	int RetAtaque;
	for (int i = 0; i < Soldados.size()-1; ++i){
		RetAtaque+= Soldados.at(i)->Ataque();
	}
	return RetAtaque;
}

int EscuadronTerrestres::Defensa(){
	int RetDefensa;
	for (int i = 0; i < Soldados.size()-1; ++i){
		RetDefensa+= Soldados.at(i)->Defensa();
	}
	return RetDefensa;
}

EscuadronTerrestres::~EscuadronTerrestres(){
	
}