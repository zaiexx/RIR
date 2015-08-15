#include <stdio.h>


int main () {

	int edad;
	char nombre[100];
	
	printf("Por favor, ingrese su nombre\n");
	scanf("%s",nombre);

	printf("Por favor, ingrese su edad\n");
	scanf("%d",&edad);

	printf("Hola %s, tu tienes %d años\n",nombre,edad);


return 0;
}

