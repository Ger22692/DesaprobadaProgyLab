/*
 ============================================================================
 Name        : clase6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define QTY_EDADES 3

// \n
// []
/************** ORDENAMIENTO ARRAY **************/

int main(void) {
		int edades[QTY_EDADES] = {54,26,93};
		int respuesta;

		printArray(edades, QTY_EDADES);
		respuesta = ordenarArray(edades , QTY_EDADES);
		printf("\nVueltas: %d \n", respuesta);
		printArray(edades, QTY_EDADES);

		respuesta = ordenarArray(edades , QTY_EDADES);
		printf("\nVueltas Ordenado: %d \n", respuesta);
		printArray(edades, QTY_EDADES);

	return EXIT_SUCCESS;
}



