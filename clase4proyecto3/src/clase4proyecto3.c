/*
 ============================================================================
 Name        : clase4proyecto3.c
 Author      : Eugenia
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//PARA QUE LA FUNCIÓN ME DEVUELVA UN NUMERO FLOTANTE

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	float edad;
	float peso;
	int respuesta;

	respuesta = utn_getNumeroFlotante(&edad,"Edad?\n","Error la edad debe ser desde 0 a 100\n",0,100,2);
	if(respuesta == 0)
	{
		printf("La edad es: %f",edad);
	}
	else
	{
		printf("\nERROR");
	}

	respuesta = utn_getNumeroFlotante(&peso,"Peso?\n","Error peso debe ser desde 0 a 500\n",0,500,3);
	if(respuesta == 0)
	{
		printf("El peso es: %f",peso);
	}
	else
	{
		printf("ERROR");
	}

	return EXIT_SUCCESS;
}
