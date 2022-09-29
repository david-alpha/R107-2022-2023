#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	//Etape 1 : déclarations
	int nbDiviseur;
	int i,j;	
	//Etape 2 : Traitement
	//Première boucle de 1 à 100
	for(i=1;i<101;i++){
		//deuième boucle de 1 à sqrt(i)
		nbDiviseur = 0;
		for(j=1;j<(int)((sqrt(i)))+1;j++){
			if(i%j==0)//est-ce que i divise nombre ?
				nbDiviseur ++ ; 		
		}
		//Etape 3 : Réponse
		if(nbDiviseur==1)
			printf("le nombre %d est premier \n",i);		
	}
	return 0;
}