/*
 * utn.h
 *
 *  Created on: 21 abr. 2020
 *      Author: Usuario
 */

#ifndef UTN_H_
#define UTN_H_


int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int myGets(char* cadena, int longitud);

#endif /* UTN_H_ */
