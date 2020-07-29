/*
 * utn.c
 *
 *  Created on: 16 abr. 2020
 *      Author: Usuario
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validarNumeroFloat(char* stringRecibido)
{
    int retorno=1;
	int i;
	int contadorPuntos=0;

    for(i=0;stringRecibido[i]!='\0';i++)
    {
        if(stringRecibido[i]<'0' || stringRecibido[i]>'9')
        {
        	// no estoy en el rango de los numeros
        	if(stringRecibido[i]=='.') // es un punto
        	{
        		contadorPuntos++;
        		if(contadorPuntos>1)
        		{
        			// encontre un segundo punto, doy error
                    retorno=0;
                    break;
        		}
        	}
        	else
        	{
        		//Hay algo que no es un punto ni numero
        		if(i==0)
        		{
        			// me pongo a ver que onda con el caracter
        			if(stringRecibido[i]!='+' && stringRecibido[i]!='-')
        			{
        				retorno=0;
        				break;
        			}
        		}
        		else
        		{
        			retorno=0;
        			break;
        		}
        	}
        }
    }
    return retorno;
}
