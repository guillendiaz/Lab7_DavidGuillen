#ifndef ARQUERO_H
#define ARQUERO_H
#include "Soldado.h"
#include <string>

using namespace std;

class Arquero : public Soldado{
	private:
		double NumFlechas;
		double Precision;

	public:
		Arquero();
		Arquero(string, string, int, double, double);
		void setNumFlechas(double);
		double getNumFlechas();
		void setPrecision(double);
		double getPrecision();
		double Ataque();
		double Defensa();
		~Arquero();
	
};

#endif