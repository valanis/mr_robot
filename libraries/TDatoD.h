/*Universidad Caece
  Taller de Robótica
  Abstracción de tipos de datos
*/

#ifndef __TDATOD_H
	#define __TDATOD_H

	#ifndef __MAX
		#define	__MAX 100
	#endif

	#ifndef TRUE
			#define TRUE 1
	#endif

	#ifndef FALSE
		#define FALSE 0
	#endif

	typedef int Boolean;

  //Tipos de datos entero y caracter para colas y pilas simples
	typedef char TdatoC;
	typedef int TdatoE;

  //Tipo de dato entero para colas y pilas dinamicas
  struct NodoE {
    TdatoE info;
    struct NodoE *siguiente;
  };

  //Tipo de dato caracter para colas y pilas dinamicas
  struct NodoC {
    TdatoC info;
    struct NodoC *siguiente;
  };

#endif


