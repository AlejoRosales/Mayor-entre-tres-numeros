#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	int x, y, z;
	
	printf ("Ejercicio 3\nLeer tres numeros y escribir el mayor de los tres");
	printf ("\n------------------------------------------------");
	
	printf ("\n\nEscribe el 1er Numero :");
	scanf ("%d",&x);
	
	printf ("\nEscribe el 2do Numero :");
	scanf ("%d",&y);
	
	printf ("\nEscribe el 3er Numero :");
	scanf ("%d",&z);
	
	if (x > y ){
		if (x > z){
			printf ("\n\nEl Numero %d es el mayor ",x);
		}else{
			printf ("\n\n El Numero %d es el mayor ",z);			
		}
	}
	
	if (y > x){
		if (y > z){
			printf ("\n\nEl Numero %d es el mayor ",y);			
		}else{
			printf ("\n\nEl Numero %d es el mayor ",z);
		}
	}
	
	getch();
	return 0;
}
