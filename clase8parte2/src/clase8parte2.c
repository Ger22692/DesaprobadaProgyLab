/*
 ============================================================================
 Name        : clase8parte2.c
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
#include "Alumno.h"

#define QTY_ALUMNOS 30

int main(void) {

	Alumno auxiliarAlumno;
	Alumno arrayAlumnos[QTY_ALUMNOS];

	inicializarArray(arrayAlumnos,QTY_ALUMNOS);
	auxiliarAlumno.altura = 2.04;
	auxiliarAlumno.legajo = 99;
	auxiliarAlumno.isEmpty = 0;
	strcpy(auxiliarAlumno.nombre,"Juan");

	arrayAlumnos[14] = auxiliarAlumno;

	imprimirArrayAlumnos(arrayAlumnos, QTY_ALUMNOS);

	return EXIT_SUCCESS;
}
