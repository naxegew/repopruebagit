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

int main(void) {
int numero1;
int numero2;
int resultado;
printf("\nnumero1: ");
scanf("%d", &numero1);
printf("\nnumero2: ");
scanf("%d", &numero2);
resultado = numero1 + numero2;
printf("resultado:%d", resultado);
return 0;
// nueva version
}
