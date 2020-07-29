/*
 * Producto.h
 *
 *  Created on: 23 abr. 2020
 *      Author: Usuario
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#define NOMBRE_LEN 50
#define DESCRIPCION_LEN 50

typedef struct {
		char nombre[NOMBRE_LEN];
		char descripcion[DESCRIPCION_LEN];
		float precio;
}Producto;

#endif /* PRODUCTO_H_ */
