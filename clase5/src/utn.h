/*
 * utn.h
 *
 *  Created on: 9 abr. 2020
 *      Author: Usuario
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
void imprimirArray(int array[], int len);
void promedioArrayInt(int array[], int len, float* promedio );

#endif /* UTN_H_ */
