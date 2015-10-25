#include <stdio.h>
#include <iostream>

#include "../libraries/ColaE.h"
#include "../libraries/PilaE.h"

using namespace std;

void mostrarPila(Pila pila, TdatoE actual, int elementos) {
  printf("[PILA]\n"); 
  printf("  /\\ \n  \\/ \n");   
  for(int j = 0; j < elementos; j++) {
      psacare(&pila, &actual);
      printf(" |%d|\n", actual);   
  }
}

void mostrarCola(Cola cola, TdatoE actual, int  elementos) {
  printf("[COLA]\n"); 
  printf("  /\\ \n"); 
  for(int j = 0; j < elementos; j++) {
      csacare(&cola, &actual);
      printf(" |%d|\n", actual);   
  }
  printf("  /\\ \n"); 
}

int main()
{
  int contador = 0;
  int cantidad;
  int elementos;
  Boolean pilaLlena = false;
  Boolean colaLlena = false;
  TdatoE actual;
 
  Pila pila = Pila();
  Cola cola = Cola();
  
  pcreare(&pila);
  ccreare(&cola);

  do {
    printf("¿Cuántos elementos desea insertar? (Máximo: %d) ", __MAX);
    cin >> cantidad; 
  } while(cantidad > __MAX || cantidad <= 0);

  elementos = cantidad;

  while(cantidad > 0 && !pilaLlena && !colaLlena) {
    contador++;
    printf("Ingrese elemento #%d: ", contador);
    cin >> actual;
    pponere(&pila, actual);
    cponere(&cola, actual);
    pilaLlena = pllenae(&pila);
    colaLlena = cllenae(&cola);
    cantidad--;
  }

  if(cantidad > 0) {
    printf("Error: memoria insuficiente.\n");
    printf("Pila llena: %d\n", pilaLlena);
    printf("Cola llena: %d\n", colaLlena);
  } else {
    printf("Pila completada correctamente. Cantidad de elementos: %d\n", pila.Cima + 1);
    printf("Cola completada correctamente. Cantidad de elementos: %d\n", cola.Final + 1);

    mostrarPila(pila, actual, elementos);
    mostrarCola(cola, actual, elementos);
  }

  return 0;
}