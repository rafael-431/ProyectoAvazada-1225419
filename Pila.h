#pragma once
#include "Nodo.h"
ref class Pila
{
	/*Nodo^ cabeza;*/
public:
	Nodo^ cabeza;
	int tamaño = 0;
	bool Pilavacia();
	Nodo^ quitar();
	void insetar(Nodo^ decola);
	void ordenarascendentecan(Nodo^ p);
	void ordenarascendenteart(Nodo^ p);

	
};

