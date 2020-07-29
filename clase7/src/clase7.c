/*
 ============================================================================
 Name        : clase7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : EJERCICIO 1:
 * ESCRIBIR LA FUNCION calcularMayor(); LA FUNCION DEBE RECIBIR DOS NUMEROS INT
 * Y DEVOLVER POR REFERENCIA, EL NUMERO MAYOR. LA FUNCON DEBE RETORNA UN 1 SI
 * ENCONTRO UN MAYOR O UN 0 SI AMBOS NUMEROS SON IGUALES.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

// \0
// \n
// []

int main(void) {
	setbuf(stdout, NULL);

	int resultado;
	int num1, num2;


	utn_getNumero(&num1, "Ingrese primer numero: ", "Error", -999 ,999 ,2 );
	utn_getNumero(&num2, "Ingrese segundo numero: ", "Error", -999 ,999 ,2 );


	if(calcularMayor(&resultado,num1,num2)==1){
	printf("Los numeros sin iguales \n");
	}else{
	printf("El mayor es: %d \n", resultado);
	}


	return EXIT_SUCCESS;
}
