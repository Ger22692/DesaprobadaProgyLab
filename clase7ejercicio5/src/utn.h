/*
 * utn.h
 *
 *  Created on: 14 abr. 2020
 *      Author: Usuario
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
void imprimirArray(int array[], int len);
int ordenarArray(int* pArray, int limite);
void InicializarArray(int array[], int len,int valorInicio);
void borrarImpares(int array[], int len);

#endif /* UTN_H_ */
