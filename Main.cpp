// Lab05_B17033.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Lista.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoIntInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Elemento *e;
	Lista listaDeDoubles;
	listaDeDoubles.insertar(new ElementoDouble(7.87));
	listaDeDoubles.insertar(new ElementoDouble(21.41));
	listaDeDoubles.insertar(new ElementoDouble(12.36));
	listaDeDoubles.insertar(new ElementoDouble(0.89));
	listaDeDoubles.insertarAlInicio(new ElementoDouble(63.02));
	listaDeDoubles.insertarAlInicio(new ElementoDouble(45.89));
	listaDeDoubles.insertarEnPos(new ElementoDouble(11.01));
	listaDeDoubles.insertarEnPos(new ElementoDouble(19.21));
	listaDeDoubles.insertarAlFinal(new ElementoDouble(12.00));
	listaDeDoubles.insertarAlFinal(new ElementoDouble(12.60));
	cout <<"Lista de Double:\t" <<listaDeDoubles << endl;

	Lista listaDePersonas;
	listaDePersonas.insertar(new ElementoPersona(308960521, "Sancho Rodriguez"));
	listaDePersonas.insertar(new ElementoPersona(118340222, "Valeria Cardenas"));
	listaDePersonas.insertar(new ElementoPersona(704650351, "Cristobal Valverde"));
	listaDePersonas.insertar(new ElementoPersona(202230512, "Maikol Jordan Soto"));
	listaDePersonas.insertarAlInicio(new ElementoPersona(603330555, "Benedicto Chavez"));
	listaDePersonas.insertarAlInicio(new ElementoPersona(401110777,"Armando Varela"));
	listaDePersonas.insertarEnPos(new ElementoPersona(115910567,"Bananito Cebollas"));
	listaDePersonas.insertarEnPos(new ElementoPersona(207120295, "Cesar Vasquez"));
	listaDePersonas.insertarAlFinal(new ElementoPersona(204290538,"Chunche Montero"));
	listaDePersonas.insertarAlFinal(new ElementoPersona(204500213,"Batman Turco"));
	cout << "Lista de Personas:\t" << listaDePersonas << endl;

	Lista listaDeInts;
	listaDeInts.insertar(new ElementoInt(7));
	listaDeInts.insertar(new ElementoInt(21));
	listaDeInts.insertar(new ElementoInt(12));
	listaDeInts.insertar(new ElementoInt(0));
	listaDeInts.insertarAlInicio(new ElementoInt(63));
	listaDeInts.insertarAlInicio(new ElementoInt(45));
	listaDeInts.insertarEnPos(new ElementoInt(11));
	listaDeInts.insertarEnPos(new ElementoInt(19));
	listaDeInts.insertarAlFinal(new ElementoInt(12));
	listaDeInts.insertarAlFinal(new ElementoInt(12));
	cout << "Lista de Ints:\t" << listaDeInts << endl;

	Lista listaDeIntInts;
	listaDeIntInts.insertar(new ElementoIntInt(7, 6));
	listaDeIntInts.insertar(new ElementoIntInt(21, 8));
	listaDeIntInts.insertar(new ElementoIntInt(12, 3));
	listaDeIntInts.insertar(new ElementoIntInt(0,9));
	listaDeIntInts.insertarAlInicio(new ElementoIntInt(63,1));
	listaDeIntInts.insertarAlInicio(new ElementoIntInt(45,2));
	listaDeIntInts.insertarEnPos(new ElementoIntInt(11,6));
	listaDeIntInts.insertarEnPos(new ElementoIntInt(19,8));
	listaDeIntInts.insertarAlFinal(new ElementoIntInt(12,1));
	listaDeIntInts.insertarAlFinal(new ElementoIntInt(12,0));
	cout << "Lista de IntInts:\t" << listaDeIntInts << endl;

	return 0;
}

