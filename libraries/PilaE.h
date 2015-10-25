/*
	Universidad Caece
  Taller de Robótica
  Pila Estática de Enteros
*/

#ifndef __PILAE_H
#define __PILAE_H

#include "TDATO.h"

struct Pila{
	int Cima;
	TdatoE Elem[__MAX];
};

typedef struct Pila TpilaE;

int pllenae(TpilaE *p){
	return	p->Cima == __MAX-1;
}

int pvaciae(TpilaE *p){
	return p->Cima == -1;
}

void pcreare(TpilaE *p){
	p->Cima=-1;
}

void pponere(TpilaE *p, TdatoE x){
	p->Cima++;
	p->Elem[p->Cima] = x;
}

void psacare(TpilaE *p, TdatoE *x){
	*x = p->Elem[p->Cima];
	p->Cima--;
}

#endif