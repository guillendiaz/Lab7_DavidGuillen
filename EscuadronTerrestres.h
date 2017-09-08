#ifndef ESCUADRONTERRESTRES_H
#define ESCUADRONTERRESTRES_H
#include <string>
#include <vector>
using namespace std;

class EscuadronTerrestres{
	private:
		string Nombre;
		vector<Soldado*> Soldados;
	public:
		EscuadronTerrestres();
		EscuadronTerrestres(string);
		void setNombre(string);
		string getNombre();

		void addSoldado(Soldado);
		Soldado getSoldado();
		~EscuadronTerrestres();
};

#endif