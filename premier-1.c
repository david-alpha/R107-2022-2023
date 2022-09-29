#include <stdio.h>
#include <stdlib.h>

int main(){
	//Etape 1 : déclarations
	int nbDiviseur=1;
	int i,nombre;
	//Etape 2 : Récupération du nombreprintf("quelle factorielle\n");
	printf("Donnez un nombre svp :\n");
	scanf("%d",&nombre); 	
	//Etape 3 : Traitement
	for(i=2;i<nombre+1;i++){
		if(nombre%i==0)//est-ce que i divise nombre ?
				nbDiviseur ++ ; 		
		}
		//Etape 4 : Réponse
	if(nbDiviseur==2){
		printf("le nombre %d est premier \n",nombre);	
	}else{
		printf("le nombre %d n'est pas premier \n",nombre);
	}
	return 0;	
}