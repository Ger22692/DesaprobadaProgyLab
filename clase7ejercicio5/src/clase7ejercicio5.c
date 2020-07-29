/*
 ============================================================================
 Name        : clase7ejercicio5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Realizar un programa que le pida 5 numeros int al usuario y los almacene en un array.
 Luego ejecutar la funcion borrarImpares() pasandole el array y que deberá reemplazar
 los numeros que son impares por un cero.
 b) Luego imprimir el array para chequear el funcionamiento.
 c) Ordenar el array de menor a mayor y volver a imprimirlo.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define NUMEROSINT_QTY 5
#define VALOR_INICIO -1

int main(void) {
	setbuf(stdout,NULL);

	int numeros;
	int numerosInt[NUMEROSINT_QTY];
	int respuesta;
	int i;

	InicializarArray(numerosInt, NUMEROSINT_QTY , VALOR_INICIO);

	for(i=0;i < NUMEROSINT_QTY ;i++)
				{
					respuesta = utn_getNumero(&numeros,"Ingrese numero: \n","Error",1,130,2);

					if(respuesta == 0)
					{
					numerosInt[i] = numeros;
					}else{
						printf("Error.");
					}
				}
	borrarImpares(numerosInt, NUMEROSINT_QTY);
	imprimirArray(numerosInt, NUMEROSINT_QTY);
	printf("Array odenado de < a > : \n");
	ordenarArray(numerosInt , NUMEROSINT_QTY);
	imprimirArray(numerosInt, NUMEROSINT_QTY);


	return EXIT_SUCCESS;
}
