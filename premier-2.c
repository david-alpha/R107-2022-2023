#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//Etape 1 : déclarations
	int nbDiviseur=1;
	int i,nombre;
	//Etape 2 : Récupération du nombreprintf("quelle factorielle\n");
	printf("Donnez un nombre svp :\n");
	scanf("%d",&nombre); 	
	//Etape 3 : Traitement
	printf("voici la partie entiere : %d \n",(int)((sqrt(nombre))));
	for(i=2;i<(int)((sqrt(nombre)))+1;i++){
		if(nombre%i==0)//est-ce que i divise nombre ?
				nbDiviseur ++ ; 		
		}
		//Etape 4 : Réponse
	if(nbDiviseur<2){
		printf("le nombre %d est premier \n",nombre);	
	}else{
		printf("le nombre %d n'est pas premier \n",nombre);
	}
	return 0;	
}