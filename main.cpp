#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
#include "EscuadronTerrestres.h"
#include "Soldado.h"
#include "Arquero.h"
#include "CorazaDura.h"
#include "AsesinoOculto.h"

using namespace std;

int Menu();
//Se ingresa al Menu()

int main(int argc, char const *argv[])
{
	int opcion;
	do{
		switch(opcion=Menu()){
			case 1:{
					
				}
				break;
			case 2:{

				}
				break;
		}//switch()
	}while(opcion!=3);
	return 0;
}//main()

int Menu(){
	int opcion = 0;

	while(opcion == 0){
		cout<<"Ingrese Opcion :"<<endl
			<<"1. Ingresar Numero"<<endl
			<<"2. Operaciones"<<endl
			<<"3. Salir"<<endl;
		cin>>opcion;
		if(opcion < 1 || opcion > 3){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()

	}//while()

}//Menu()