#ifndef CORAZADURA_H
#define CORAZADURA_H
#include "Soldado.h"
#include <string>

using namespace std;

class CorazaDura : public Soldado{
	private:
		int Dureza;
		int NumLanza;

	public:
		CorazaDura();
		CorazaDura(string, string, int, int, int);
		void setDureza(int);
		int getDureza();
		void setNumLanza(int);
		int getNumLanza();
		int Ataque();
		int Defensa();
		~CorazaDura();
	
};

#endif