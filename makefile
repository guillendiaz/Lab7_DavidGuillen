main: main.o EscuadronTerrestres.o Soldado.o Arquero.o CorazaDura.o AsesinoOculto.o 
	g++ main.o EscuadronTerrestres.o Soldado.o Arquero.o CorazaDura.o AsesinoOculto.o -o main

main.o: main.cpp EscuadronTerrestres.h Soldado.h Arquero.h CorazaDura.h AsesinoOculto.h
	g++ -c main.cpp

EscuadronTerrestres.o: EscuadronTerrestres.h EscuadronTerrestres.cpp
	g++ -c EscuadronTerrestres.cpp

Soldado.o: Soldado.h Soldado.cpp
	g++ -c Soldado.cpp

Arquero.o: Arquero.h Arquero.cpp
	g++ -c Arquero.cpp

CorazaDura.o: CorazaDura.h CorazaDura.cpp
	g++ -c CorazaDura.cpp

AsesinoOculto.o: AsesinoOculto.h AsesinoOculto.cpp
	g++ -c AsesinoOculto.cpp

clean:
	rm *.o main