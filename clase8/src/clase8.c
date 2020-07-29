/*
 ============================================================================
 Name        : clase8.c
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

// \n
// \0

int main(void) {
	setbuf(stdout,NULL);
	int edad;

	if(utn_getNumero(&edad, "\nEdad? ","\nError", 0,200,2) == 0)
	{
		printf("\nLa edad es %d",edad);
	}



	return EXIT_SUCCESS;
}
