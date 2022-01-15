#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeroIngresado;
	int contador = 1;
	int factorial;
	//1! = 1 = 1
	//2! = 1*2 = 2
	//3! = 1*2*3 = 6
	//4! = 1*2*3*4 = 24

	printf("Ingresa un numero: ");
	scanf("%i", &numeroIngresado);

	while(contador<numeroIngresado){
		++contador;
		factorial = factorial*contador;
	}
	
	printf("El factorial del numero %i es: %i", numeroIngresado, factorial);
	
	return 0;
}
