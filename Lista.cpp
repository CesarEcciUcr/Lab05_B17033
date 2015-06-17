#include "stdafx.h"
#include "Lista.h"


Lista::Lista()
{
	this->primero = NULL;
	this->ultimo = NULL;
}

Lista::~Lista()
{

}
void Lista::insertar(Elemento* val)
{
	Elemento* tmp = nuevo(val);
	if (primero == NULL)
	{
		primero = ultimo = tmp;
	}
	else
	{
		ultimo->siguiente = tmp;
		ultimo = tmp;
	}
}

void Lista::insertarAlInicio(Elemento* val)
{
	
	if (primero == NULL)
	{
		ultimo = primero = nuevo(val);
	}
	else
	{
		Elemento *tmp = nuevo(val);
		tmp->siguiente = primero;
		primero = tmp;
	}
}

void Lista::insertarEnPos(Elemento* val)
{
	if (anterior = NULL)
	{
		anterior->siguiente = nuevo(val);
		anterior = anterior->siguiente;
	}
}

void Lista::insertarAlFinal(Elemento* val)
{
	if (primero == NULL)
	{
		ultimo = primero = nuevo(val);
	}
	else
	{
		ultimo->siguiente = nuevo(val);
		ultimo = ultimo->siguiente;
	}
}
/*
void Lista::imprimir(Elemento* e, ostream & out, int i)
{
	Lista *l;
	for (int i = 0; i < l->size(); i++)
	{
		if (l->primero == NULL)
		{
			cout << "No hay datos" << endl;
		}
		else
		{
			Elemento* p = primero;
			while (p != NULL)
			{
				p = p->siguiente;
				p = p->siguiente;
			}
		}
	}
}
*/

int Lista::size()
{
	int i = 0;
	Elemento* tmp = primero;
	while (tmp != NULL) {
		i++;
		tmp = tmp->siguiente;
	}
	return i;
}
