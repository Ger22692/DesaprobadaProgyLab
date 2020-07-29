/*
 ============================================================================
 Name        : clase5.c
 Author      : 
 Version     : ARRAYS
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//EL NOMBRE DEL ARRAY ES LA DIRECCION DE MEMORIA DONDE COMIENZA EL ARRAY;
//AL RECIBIR UN ARRAY, TAMBIEN SE RECIBE SU TAMAÑO
//EN LA FUNCION

/////////////// ARRAYS /////////////


#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EDADESSIZE 5

// \n
// []


int main(void) {
	setbuf(stdout, NULL);

		//EJERCICIO HACER UNA FUNCION QUE CALCULE EL PROMEDIO
		//DE LOS VALORES DEL ARRAY QUE RECIBE Y ME DEVUELVA EL PRMEDIO
			int edad;
			int edades[EDADESSIZE];
			int respuesta;
			int i;
			float promedio;

			//Recorro para cargar en forma secuencial;
			for(i=0;i < EDADESSIZE ;i++)
			{
				respuesta = utn_getNumero(&edad,"Ingrese edad: \n","Error de edad",1,130,2);

				if(respuesta == 0)
				{
				edades[i] = edad;
				}else{
					printf("Error de edad.");
				}
			}

			//Recorro para imprimir;
			promedioArrayInt(edades, EDADESSIZE, &promedio);

	return EXIT_SUCCESS;
}








//PEDIR AL USUARIO 5 EDADES Y LUEGO:
//IMPRIMIR LAS 5 EDADES;
/*
	#define EDADESSIZE  5

	//PEDIR AL USUARIO 5 EDADES Y LUEGO:
	//IMPRIMIR LAS 5 EDADES;
		int edad;
		int edades[EDADESSIZE];
		int respuesta;
		int i;

		//Recorro para cargar en forma secuencial;
		for(i=0;i < EDADESSIZE ;i++)
		{
			respuesta = utn_getNumero(&edad,"Ingrese edad: \n","Error de edad",1,130,2);

			if(respuesta == 0)
			{
			edades[i] = edad;
			}else{
				printf("Error de edad.");
			}
		}

		//Recorro para imprimir;
		imprimirArray(edades, EDADESSIZE);

*/

// EXPLICACION CARGAR ARRAY
/*
	int numeros [7];
	int i;

	for(i ; i < 7 ; i++){
		numeros[i] = 5;
	}*/


//REPASO FUNCION GET_NUMERO
/*
	int edad;
	int respuesta;

	respuesta = utn_getNumero(&edad, "Ingrese edad: \n", "Edad no permitida.\n",1,120,3);

	if(respuesta == 0){
		printf("La edad es: %d \n", edad);
	}else
	{
		printf("Error.");
	}*/



