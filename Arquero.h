#ifndef ARQUERO_H
#define ARQUERO_H
#include "Soldado.h"
#include <string>

using namespace std;

class Arquero : public Soldado{
	private:
		int NumFlechas;
		int Precision;

	public:
		Arquero();
		Arquero(string, string, int, int, int);
		void setNumFlechas(int);
		int getNumFlechas();
		void setPrecision(int);
		int getPrecision();
		double Ataque();
		double Defensa();
		~Arquero();
	
};

#endif