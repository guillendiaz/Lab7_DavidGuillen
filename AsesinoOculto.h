#ifndef ARQUERO_H
#define ARQUERO_H
#include "Soldado.h"
#include <string>

using namespace std;

class AsesinoOculto : public Soldado{
	private:
		int NumAsesinatos;
		int CapDesapercibido;

	public:
		AsesinoOculto();
		AsesinoOculto(string, string, int, int, int);
		void setNumAsesinatos(int);
		int getNumAsesinatos();
		void setCapDesapercibido(int);
		int getCapDesapercibido();
		int Ataque();
		int Defensa();
		~AsesinoOculto();
	
};

#endif