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
int MenuO();
//Se ingresa al MenuO()
int main(int argc, char const *argv[]){
	int opcion;
	vector<EscuadronTerrestres> Escuadrones;
	do{
		switch(opcion=Menu()){
			case 1:{
					if (Escuadrones.size() > 4){
						cout<<"Se a alcanzado el maximo de Escuadrones"<<endl;
					}else{
						string Nombre;
						cout<<"Ingrese Nombre del Escuadron Terrestre: ";
						cin>>Nombre;
						cout<<endl;
						EscuadronTerrestres NuevoEscTerre(Nombre);
						Escuadrones.push_back(NuevoEscTerre);
					}
				}
				break;
			case 2:{
				int OpcionOperador;
				do{
					switch(OpcionOperador = MenuO()){
						case 1:{
							string Nombre, Ciudad;
							int Edad, NumFlechas, Precision, NumSol;
							cout<<"Ingrese Nombre del Arquero: ";
							cin>>Nombre;
							cout<<endl;
							cout<<"Ingrese Cidudad del Arquero: ";
							cin>>Ciudad;
							cout<<endl;
							cout<<"Ingrese Edad del Arquero: ";
							cin>>Edad;
							cout<<endl;
							cout<<"Ingrese Numero de Flechas del Arquero: ";
							cin>>NumFlechas;
							cout<<endl;
							cout<<"Ingrese Precisión del Arquero: ";
							cin>>Precision;
							cout<<endl;
							for (int i = 0; i < Escuadrones.size()-1; ++i){
								cout<<i<<". "<<Escuadrones.at(i).getNombre()<<endl;
							}
							cout<<"Eliga el numero del Escuadron al cual asignar el Soldado"<<endl;
							cin>>NumSol;
							Soldado* NuevoSol = new Arquero(Nombre, Ciudad, Edad, NumFlechas, Precision);
							Escuadrones.at(NumSol).addSoldado(NuevoSol);
						}
							break;

						case 2:{
							string Nombre, Ciudad;
							int Edad, Dureza, NumLanza, NumSol;
							cout<<"Ingrese Nombre del Coraza Dura: ";
							cin>>Nombre;
							cout<<endl;
							cout<<"Ingrese Cidudad del Coraza Dura: ";
							cin>>Ciudad;
							cout<<endl;
							cout<<"Ingrese Edad del Coraza Dura: ";
							cin>>Edad;
							cout<<endl;
							cout<<"Ingrese Dureza del Coraza Dura: ";
							cin>>Dureza;
							cout<<endl;
							cout<<"Ingrese Numero de Lanzas del Coraza Dura: ";
							cin>>NumLanza;
							cout<<endl;
							for (int i = 0; i < Escuadrones.size()-1; ++i){
								cout<<i<<". "<<Escuadrones.at(i).getNombre()<<endl;
							}
							cout<<"Eliga el numero del Escuadron al cual asignar el Soldado"<<endl;
							cin>>NumSol;
							if (Dureza < 0 || Dureza > 10){
								Soldado* NuevoSol = new CorazaDura(Nombre, Ciudad, Edad, Dureza, NumLanza);
								Escuadrones.at(NumSol).addSoldado(NuevoSol);
							}else{
								cout<<"Dureza No cumple Con el rango";
							}
							
						}
							break;

						case 3:{
							string Nombre, Ciudad;
							int Edad, NumAse, CapDesa, NumSol;
							cout<<"Ingrese Nombre del Asesino Oculto: ";
							cin>>Nombre;
							cout<<endl;
							cout<<"Ingrese Cidudad del Asesino Oculto: ";
							cin>>Ciudad;
							cout<<endl;
							cout<<"Ingrese Edad del Asesino Oculto: ";
							cin>>Edad;
							cout<<endl;
							cout<<"Ingrese Numero de Asesinatos del Asesino Oculto: ";
							cin>>NumAse;
							cout<<endl;
							cout<<"Ingrese Capacidad para pasar Desapercibido del Asesino Oculto: ";
							cin>>CapDesa;
							cout<<endl;
							for (int i = 0; i < Escuadrones.size()-1; ++i){
								cout<<i<<". "<<Escuadrones.at(i).getNombre()<<endl;
							}
							cout<<"Eliga el numero del Escuadron al cual asignar el Soldado"<<endl;
							cin>>NumSol;
							if (CapDesa< 0 || CapDesa> 10){
								Soldado *NuevoSol = new AsesinoOculto(Nombre, Ciudad, Edad, NumAse, CapDesa);
								Escuadrones.at(NumSol).addSoldado(NuevoSol);
							}else{
								cout<<"Capacidad para pasar Desapercibido No cumple Con el rango";
							}
						}
							break;
					}//switch()2
						}
				while(OpcionOperador != 4);
				}
				break;
			case 3:{
				string bando, tipo;
				for (int i = 0; i < Escuadrones.size()-1; ++i){
						cout<<i<<". "<<Escuadrones.at(i).getNombre()<<endl;
						cout<<"Elija Bando del Escuadron[1/2]: ";
						cin>>bando;
						cout<<endl;
						Escuadrones.at(i).setBando(bando);
				}
				for (int i = 0; i < Escuadrones.size()-1; ++i){
						cout<<i<<". "<<Escuadrones.at(i).getNombre()<<endl;
						cout<<"Elija Tipo del Escuadron[Retaguardia/Frontal]: ";
						cin>>tipo;
						cout<<endl;
						Escuadrones.at(i).setTipo(bando);
				}
				cout<<"Inicio de Simulacion"<<endl;
				for (int i = 0; i < Escuadrones.size()-1; ++i){
					for (int j = 0; j < Escuadrones.size()-1; ++j){
						if ((Escuadrones.at(i).getBando() == "1" &&  Escuadrones.at(i).getTipo() == "Retaguardia") && (Escuadrones.at(j).getBando() == "2" && Escuadrones.at(i).getTipo() == "Frontal")){
							if (Escuadrones.at(i).Ataque() > Escuadrones.at(j).Defensa() * 10){
								cout<<"Ataque"<<endl;
								cout<<Escuadrones.at(i).Ataque()<<".."<<Escuadrones.at(j).Ataque()<<endl;
							}
						}
					}
				}

			}
			break;
		}//switch()
	}while(opcion!=4);
	return 0;
}//main()

int Menu(){
	int opcion = 0;

	while(opcion == 0){
		cout<<"Ingrese Opcion :"<<endl
			<<"1. Crear Escuadron Terrestres"<<endl
			<<"2. Crear Soldados"<<endl
			<<"3. Simulación"<<endl
			<<"4. Salir"<<endl;
		cin>>opcion;
		if(opcion < 1 || opcion > 4){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()

	}//while()

}//Menu()
int MenuO(){
	int opcion = 0;
	while(opcion == 0){
		cout<<"Ingrese Opcion :"<<endl
			<<"1. Arquero"<<endl
			<<"2. Coraza Dura"<<endl
			<<"3. Asesino Oculto"<<endl
			<<"4. Salir"<<endl;
		cin>>opcion;
		if(opcion < 1 || opcion > 4){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()
	}//while()
}//MenuO()