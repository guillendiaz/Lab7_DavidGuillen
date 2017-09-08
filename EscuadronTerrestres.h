#ifndef ESCUADRONTERRESTRES_H
#define ESCUADRONTERRESTRES_H
#include <string>
#include <vector>
#include "Soldado.h"
using namespace std;

class EscuadronTerrestres{
	private:
		string Nombre;
		string Bando;
		string Tipo;
		vector<Soldado*> Soldados;
	public:
		EscuadronTerrestres();
		EscuadronTerrestres(string);
		void setNombre(string);
		string getNombre();
		void setBando(string);
		string getBando();
		void setTipo(string);
		string getTipo();
		void addSoldado(Soldado*);
		Soldado* getSoldado(int);
		double Ataque();
		double Defensa();
		~EscuadronTerrestres();
};

#endif