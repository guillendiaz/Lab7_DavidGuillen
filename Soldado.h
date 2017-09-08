#ifndef SOLDADO_H
#define SOLDADO_H
#include <string>

using namespace std;

class Soldado{
	private:
		string Nombre;
		string Ciudad;
		int Edad;
	public:
		Soldado();
		Soldado(string, string, int);
		void setNombre(string);
		string getNombre();
		void setCiudad(string);
		string getCiudad();
		void setEdad(int);
		int getEdad();
		int Ataque();
		int Defensa();
		~Soldado();
	
};

#endif