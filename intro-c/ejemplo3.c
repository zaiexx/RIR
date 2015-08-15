#include <stdio.h>


int main () {

	int edad;
	
	printf("Hola, por favor ingresa tu edad\n");
	scanf("%d",&edad);

	if (edad < 18) {
		printf("Lo sentimos, usted es menor de edad, por favor, salga de aqui\n");
	}else {
		printf("Enjoy!!\n");
	}



return 0;
}
