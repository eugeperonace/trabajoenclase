/*
 ============================================================================
 Name        : clase4proyecto1.c
 Author      : Eugenia
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int dividir (float* pResultado, int operador1, int operador2);

int main(void)
{
	setbuf(stdout,NULL);

	float resultado;
	int numero1;
	int numero2;
	int respuesta;

	printf("Numero 1?: ");
	scanf("%d", &numero1);

	printf("Numero 2?: ");
	scanf("%d", &numero2);

	respuesta = dividir(&resultado,numero1,numero2);
	if(respuesta == 0)
	{
		printf("El resultado es: %.2f\n", resultado);
	}
	else
	{
		printf("No es posible dividir por cero\n");
	}
	return EXIT_SUCCESS;                                            //recibi un puntero a una variable en la cual puedo escribir un resultado
}                                                                   //necesito recibir un puntero a la variable resultado,











	                                                     //le tengo que pasar la dirección de memoria
                                                 	//le habilitamos la posibilidad de que pueda escribir en esa variable
                                                   //asegurarme de que recibí un puntero distinto de NULL

	                                             //NUESTRA UNICA RESTRICCION ES QUE EL OPERADOR 2 TIENE QUE SER DISTINTO DE CERO, si se dan ambas cosas puedo guardar el resultado
	                                            //CADA VEZ QUE RECIBO UN PUNTERO, TENGO QUE PREGUNTARME SU PUNTERO ES DISTINTO DE NULL
