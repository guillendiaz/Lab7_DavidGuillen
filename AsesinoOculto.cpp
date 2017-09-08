#include "AsesinoOculto.h"
#include "Soldado.h"

AsesinoOculto::AsesinoOculto(){

}

AsesinoOculto::AsesinoOculto(string pNombre, string pCiudad, int pEdad, int pNumAsesinatos, int pCapDesapercibido){
	this->Nombre = pNombre;
	this->Ciudad = pCiudad;
	this->Edad = pEdad;
	this->NumAsesinatos = pNumAsesinatos;
	this->CapDesapercibido = pCapDesapercibido;
}

void AsesinoOculto::setNumAsesinatos(int pNumAsesinatos){
	this->NumAsesinatos = pNumAsesinatos;
}

int AsesinoOculto::getNumAsesinatos(){
	return NumAsesinatos;
}

void AsesinoOculto::setCapDesapercibido(int pCapDesapercibido){
	this->CapDesapercibido = pCapDesapercibido;
}

int AsesinoOculto::getCapDesapercibido(){
	return CapDesapercibido;
}

int AsesinoOculto::Ataque(){
	return NumAsesinatos;
}

int AsesinoOculto::Defensa(){
	return CapDesapercibido * 10;
}

AsesinoOculto::~AsesinoOculto(){

}
