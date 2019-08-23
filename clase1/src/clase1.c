/*
 ============================================================================
 Name        : clase1.c
 Author      : Ignacio
 Version     :
 Copyright   : clase1
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int n1,int n2);
int main(void) {
int numero1;
int numero2;
int resultado;

printf("\nnumero1: ");
scanf("%d", &numero1);
printf("\nnumero2: ");
scanf("%d", &numero2);
resultado = sumar(numero1,numero2);
printf("resultado:%d", resultado);
return 0;

}

int sumar(int n1,int n2)
{
int resultado;
resultado = n1 + n2;

	return resultado;
}
