/*Universidad Caece
  Taller de Robotica

  Cola Dinámica de Enteros
*/

#ifndef __COLADE_H
#define __COLADE_H

#include "TDATOD.h"

struct ColaD {
	struct NodoE *frente;
};

typedef struct ColaD TcolaDE;

void ccreare(TcolaDE *c){
    c->frente = NULL;
}

int cvaciae(TcolaDE *c){
	return c->frente == NULL;
}

NodoE* cCrearNodo(NodoE *n, TdatoE val) {
    n = (NodoE*) malloc (sizeof (NodoE));
    n->info = val;
    n->siguiente = NULL;
    return n;
}

void cponere(TcolaDE *c, TdatoE val){
    NodoE *aux;
    NodoE *nue;
    nue = cCrearNodo(nue, val);
    if (c->frente == NULL) {
        c->frente = nue;
    } else {
        aux = c->frente;
        while (aux->siguiente != NULL) {
            aux = aux->siguiente;
        }
        aux->siguiente = nue;
    }
}

NodoE* csacare(TcolaDE *c, NodoE *val){
    val = c->frente;
    c->frente = c->frente->siguiente; 
    return val;
}


int cllenae(TcolaDE *p){
    NodoE *aux;
    aux = (NodoE*) malloc (sizeof (NodoE));
    if(aux == NULL) {
        return true;
    } else {
        free(aux);
        return false;
    }
}

#endif