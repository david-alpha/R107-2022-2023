#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//procédure d'affichage qui prend en paramètre un tableau et sa longueur
void afficheTableau(int *tab, int longueur){
	int i;
	for(i=0 ; i<longueur ; ++i){
		printf("\nVoici la valeur de la %d case du tableau : %d ",i+1, tab[i] );
	}
	printf("\n\n");
	}
	

//procédure d'affichage qui prend en paramètre un tableau et sa longueur
void remplirTableau(int *tableau, int longueur){										
	int i, choix;
	for(i=0 ; i<longueur ; ++i){
		printf("Enter la valeur de la %d eme case svp \n",i+1);
		scanf("%d",&choix);
		tableau[i] = choix ;
	}
}

int main(){

	//déclaration des variables
	int longueur,valeur ;
	int *tableau;
	//récupération de la longueur du tableau
	do{	
	printf("\nDonner la longueur du tableau : ");
	scanf("%d", &longueur);
	}while(longueur<2);
	//déclaration du Tableau
	tableau = (int(*))malloc(longueur*sizeof(int));
	//Remplissage du tableau
	remplirTableau(tableau, longueur);
	//appel de la procédure d'affichage avec en paramètre et sa longueur
	afficheTableau(tableau,longueur);
	
	return 1;
	
}