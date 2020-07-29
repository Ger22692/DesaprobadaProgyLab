/*
 * Alumno.c
 *
 *  Created on: 21 abr. 2020
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"

int imprimirArrayAlumnos(Alumno* pArray,int len){
	int retorno = -1;
	int i;

	if(pArray!=NULL && len>0)
	{
		for(i=0; i<len; i++){
			if(pArray[i].isEmpty == 0 ){
			printf("Nombre: %s \n",pArray[i].nombre);
		}
		}
		retorno = 0;
	}


	return retorno;
}

int inicializarArray(Alumno* pArray ,int len){
	int retorno = -1;
		int i;

		if(pArray!=NULL && len>0)
		{
			for(i=0; i<len; i++){
			 pArray[i].isEmpty = 1;
			}
			retorno = 0;
		}
		return retorno;
}
