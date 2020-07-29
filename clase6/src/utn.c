/*
 * utn.c
 *
 *  Created on: 14 abr. 2020
 *      Author: Usuario
 */


#include <stdio.h>
#include <stdlib.h>

int printArray(int* pArray , int len){
	int i;
	int retorno = -1;

	if(pArray != NULL && len > 0){
		for(i=0; i< len; i++){
		printf("[DEBUG] INDICE: %d - VALUE: %d\n", i ,pArray[i]);
			}
		}
	return retorno;

}

int ordenarArray(int* pArray , int limite){

		int retorno = -1;
		int i;
		int buffer;
		int flagSwap;
		int contador = 0;
		int limiteVariable;

		if(pArray != NULL && limite > 0){
			limiteVariable = limite-1;
			retorno = 0;
			do{
				flagSwap = 0;
				for(i=0 ; i<limiteVariable ; i++){
					contador++;
					if(pArray[i] < pArray[i+1]){
						buffer = pArray[i];
						pArray[i] = pArray[i+1];
						pArray[i+1]= buffer;
						flagSwap = 1;
					}
				}
				limiteVariable--;
			}while(flagSwap);
			retorno = contador;
		}
		return retorno;
	}


