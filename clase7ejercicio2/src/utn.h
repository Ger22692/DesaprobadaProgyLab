/*
 * utn.h
 *
 *  Created on: 16 abr. 2020
 *      Author: Usuario
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumeroInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int calcularMayor(int* resultado, int num1, int num2);
float utn_getNumeroFloat(float* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

#endif /* UTN_H_ */
