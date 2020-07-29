/*
 * utn.c
 *
 *  Created on: 14 abr. 2020
 *      Author: Usuario
 */


#include <stdio.h>
#include <stdlib.h>

/**
*\ brief Cuenta la cantidad de palabras de un array de char.
*\ param  cadena es el array de char a ser analizado.
*\ param  len longitud del array de char.
*\ param pPalabras pntero a la variable resultado.
*\ return retorna 0 (exito), y -1(error).
*/

int contarPalabras(char cadena[], int len, int* pPalabras)
{
	int retorno = -1;
	int i;
	int contador = 0;

	if(cadena != NULL && len > 0 && pPalabras != NULL){
		retorno = 0;
		for(i=0; i<len && cadena[i] != '\0'; i++){
			if(cadena[i] == ' '){
				contador++;
			}
			*pPalabras = contador;
		}
	}

	return retorno;
}

void borrarImpares(int array[], int len){

	int i;

	if(array != NULL){
		for(i = 0; i < len ; i++){
			if(array[i] % 2 !=0 ){
				array[i] = 0;
			}
		}
	}

}

void InicializarArray(int array[], int len,int valorInicio){
	int i;

	for(i = 0; i < len ; i++){
			array[i] = valorInicio;
		}

}

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

int ordenarArray(int* pArray, int limite){
	int flagSwap;
	int i;
	int contador;
	int retorno;
	int buffer;
	int nuevoLimite;

	retorno = -1;

	if(pArray != NULL && limite >= 0){
	nuevoLimite = limite-1;
	do
	{
		flagSwap = 0;
		for(i=0 ; i< nuevoLimite-1 ; i++){
			contador++;
			if(pArray[i] > pArray[i+1]){
				flagSwap = 1;
				buffer = pArray[i];
				pArray[i] = pArray[i+1];
				pArray[i+1] = buffer;
			}
			nuevoLimite--;
		}
	}while(flagSwap);
	retorno = contador;
	}
	return retorno;
}
