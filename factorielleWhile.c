#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main() {
	
	//déclaration des variables
	int resultat = 1, n;
	//Fin déclaration variables
	
	printf("quelle factorielle\n");
	scanf("%d",&n); 			//Récupération de la factorielle
	
		if (n < 0){
			printf("Une factorielle ne peut pas etre negative\n");
			return 1;
		}else{
			if (n == 0){
				resultat = 1;
			}else{
				while (n != 1){
					resultat = resultat * n;
					n-- ;
				}
			}
			//printf("La factorielle de %d est : %d \n",n,resultat);			
		}
		printf("La factorielle de %d est : %d \n",n,resultat);
return 0;
}