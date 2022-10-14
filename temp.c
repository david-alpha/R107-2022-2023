//Bibliotheques obligatoires
#include <stdio.h>
#include <stdlib.h>


//Fonction principale
int main()
{
	//DEBUT Déclaration des variables
	float c,f;
	int d;
	d=8;
	printf("voici le nombre : %d\n",d);
	//FIN Déclaration des variables
	
    printf("bonjour, bienvenue !\n");
    printf("veuillez indiquer la temperature en farhenheit :");
	scanf("%f", &f); //lecture au clavier 
    c = 5.0/9*(f-32);
	printf("La temperature en Celsius est %.2f \n", c);
    return 0;
}