/*
	Universidad Caece
  Taller de Robótica
  Cola Estática de Enteros
*/

#ifndef __COLAE_H
#define __COLAE_H

#include "TDATO.h"

struct Cola{
	int Final;
	TdatoE Elem[__MAX];
};

typedef struct Cola TcolaE;

int cllenae(TcolaE *p){
	return p->Final == __MAX-1;
}

int cvaciae(TcolaE *p){
	return p->Final == -1;
}

void ccreare(TcolaE *p){
	p->Final=-1;
}

void cponere(TcolaE *p, TdatoE x){
	p->Final++;
	p->Elem[p->Final]= x;
}

void csacare(TcolaE *p, TdatoE *x){
int i;
	*x=p->Elem[0];
	for (i=0; i<p->Final;i++)
		p->Elem[i] = p->Elem[i+1];
	p->Final--;
}
#endif