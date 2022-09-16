#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main() {
	
	//déclaration des variables
	int n, somme, i;
	somme = 0;
	//Fin déclaration variables
	
	printf("quelle quantite, souhaitez-vous\n");
	scanf("%d",&n);

	for(i=1 ; i < n+1 ; i++){
		
		somme = somme + i;
		printf(" valeur de i : % d, valeur de somme : %d \n",i,somme);
		
	}
		printf("Le resultat est : %d\n", somme);
	
return 0;
}