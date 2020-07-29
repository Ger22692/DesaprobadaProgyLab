/*
Ejercicio 1.
Definir un tipo nuevo tipo de dato que represente un producto.
El producto tiene un nombre una descripcion y un precio.
Hacer un programa que le pida al usuario los datos del producto
y los cargue en una variable del tipo Producto definida en la
funcion main.
Imprmir los campos de la variable producto para chequear que
esten cargadas correctamente.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "Producto.h"

#define QTY_PRODUCTOS 1
#define NOMBRE_LEN 50


// \n

int main(void) {
	setbuf(stdout,NULL);

	//TIPO   //NOMBRE_VARIABLE
	Producto producto;

	if(utn_getNombre(producto.nombre,NOMBRE_LEN,"Ingrese un producto: \n", "Error \n", 3)== 0);
	{
	if(utn_getNombre(producto.descripcion,DESCRIPCION_LEN,"Descripcion: \n", "Error \n", 3)== 0);
		{

	if(utn_getNumeroFlotante(&producto.precio, "Ingrese Precio: \n","Error \n" , 0, 100000,3)== 0);
			{
		printf("Nombre:%s \n Descripcion: %s \n Precio: %.2f \n",producto.nombre ,producto.descripcion,producto.precio );
			}
		}
	}


	return EXIT_SUCCESS;
}
