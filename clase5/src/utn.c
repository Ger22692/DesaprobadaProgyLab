/*
 * utn.c
 *
 *  Created on: 9 abr. 2020
 *      Author: Usuario
 */



#include <stdio.h>
#include <stdlib.h>


int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%d",&bufferInt);
			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}

//EL NOMBRE DEL ARRAY ES LA DIRECCION DE MEMORIA DONDE COMIENZA EL ARRAY;
//AL RECIBIR UN ARRAY, TAMBIEN SE RECIBE SU TAMAÑO
//recibir array -> por referencia siempre(Nose hace una copia, es el mismo);


//len tamaño array

//Leer e Imprimir array
void imprimirArray(int array[], int len){

	int i;
	for(i=0;i<len;i++)
	{
		printf("%d \n ", array[i]);
			}
}

void promedioArrayInt(int array[], int len, float* pPromedio ){
	int i;
	float acumulador;

		for(i=0;i<len;i++)
		{
			acumulador += array[i];
				}

		*pPromedio = (float)acumulador/len;
		printf("El promedio es: %.2f", *pPromedio);
}


//if(len < 0 && promedio pPromedio != NULL)
