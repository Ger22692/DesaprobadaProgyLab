/*
 ============================================================================
 Name        : clase7ejercicio6.c
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

	int palabras;
	char texto[]="Las medidas de aislamiento que los diferentes paises adoptaron para frenar el avance del coronavirus continuan produciendo cambios bruscos en el medio ambiente gracias a la reduccion de la contaminacion y la baja de circulacion de personas. En este escenario, los animales silvestres en distintas partes del mundo se estan animando a ocupar espacios antes impensados debido a la alta presencia del ser humano. Tal es el caso de los lobos marinos de Mar del Plata, que fueron vistos deambulando por el puerto casi con total libertad.";


		if(contarPalabras(texto,sizeof(texto),&palabras)==0)
	{
		printf("El texto contiene: %d palabras",palabras);
	}

	return EXIT_SUCCESS;


}
