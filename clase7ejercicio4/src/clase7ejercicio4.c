/*
 ============================================================================
 Name        : clase7ejercicio4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

int main(void) {
	setbuf(stdout,NULL);


	float precio;

		printf("Ingrese un precio:");

		if(getFloat(&precio)==1)
		{
			printf("El precio es valido:%f",precio);
		}
		else
		{
			printf("Valor incorrecto");
		}


	return EXIT_SUCCESS;
}
