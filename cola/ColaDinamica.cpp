#include <stdio.h>
#include <iostream>

#include "../libraries/ColaDE.h"

using namespace std;

void mostrarCola(TcolaDE *cola) {
  printf("[COLA]\n"); 
  printf("  /\\ \n"); 
  while(!cvaciae(cola)) {
    NodoE *actual;
    actual = csacare(cola, actual);
    printf(" |%d|\n", actual->info);   
  }
  printf("  /\\ \n"); 
}

int main()
{
  NodoE *actual;
  NodoE dato = NodoE();
  TdatoE in;
  TcolaDE c = TcolaDE();
  TcolaDE *cola = &c;

  int contador = 0;
  int cantidad;
  int elementos;
  Boolean colaLlena = false;

  do {
    printf("¿Cuántos elementos desea insertar? ");
    cin >> cantidad; 
  } while(cantidad <= 0);

  elementos = cantidad;

  while((cantidad > 0) && (colaLlena == false)) {
    contador++;
    printf("Ingrese elemento #%d: ", contador);
    cin >> in;
    cponere(cola, in);
    colaLlena = cllenae(cola);
    cantidad--;
  }

    mostrarCola(cola);

  return 0;
}