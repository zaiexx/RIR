#include <stdio.h>


int main () {

	int veces;

	// Escribremos tantas veces como diga un usuario un mensaje con while

	printf("Estimado usuario, por favor ingrese la cantidad de veces a escribir el mensaje\n");
	scanf("%d",&veces);

	int i;

	for (i = 0; i < veces; i++) {
		printf("Mensaje numero: %d\n",i+1);
	}


return 0;
}
