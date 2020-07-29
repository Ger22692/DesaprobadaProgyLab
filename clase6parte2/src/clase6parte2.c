/*
 ============================================================================
 Name        : clase6parte2.c
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
// []

// STATIC:
//funcion static + prototipo para hacerla privada
//no se puede utilizar del main. No definirla en .h

int main(void) {
	setbuf(stdout, NULL);

	int auxInt;

		while(1)
		{
			if(utn_getNumero(&auxInt,"NUMERO?\n","ERROR\n",-2,10,2) == 0)
			{
				printf("\nEl numero es  %d",auxInt);
			}
		}

}

/*
 // \0 indica que termino el texto.

// ARRAYS CARACTERES Y STRINGS
// Siempre el array tiene que tener un caracter mas
// de lo que queremos para poner \0, que indicamos que
// termino el texto.

// Copiar lo que hay en el array strncpy(parametro1,parametro2,sizeof(parametro1));;
// parametro1 destino , parametro2 origen, numeroMaximo.

// sizeof me da el valor de cuanto mide(espacio) el array.

// strlen tipo de informacion que tengo en el array
// concatenar textos con strncat(variable, variable, tamañoMaximo);
// sprintf componer texto que va a parar al array que le indico(array, "texto" , lo que quiero guardar);

 	 char nombre[11] = "JUAN"; // '\0'
	char apellido[11] = "PEREZ"; // '\0'
	char auxiliar[30] = "";
	char buffer[256];

	strncpy(auxiliar,nombre,sizeof(auxiliar));
	strncat(nombre, " JOSE" , sizeof(nombre));
	snprintf(auxiliar, sizeof(auxiliar), "%s %s",nombre , apellido);

	printf("\n %s \n", auxiliar);
	printf("Nombre mide %d ---- auxiliar mide %d \n", sizeof(nombre), sizeof(auxiliar));
	printf("STRLEN Nombre mide %d ---- auxiliar mide %d \n", strlen(nombre), sizeof(auxiliar));
*/
