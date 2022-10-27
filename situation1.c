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
		do{
			printf("Enter la valeur de la %d eme case svp \n",i+1);
			scanf("%d",&choix);
		}while(choix < 0 || choix > 20);
		tableau[i] = choix ;
	}
}
//fonction qui calcule la moyenne
float moyenneTableau(int *tableau, float longueur){										
	int i, somme=0;
	
	for(i=0 ; i<longueur ; ++i){
		somme = somme + tableau[i];
	}
	return somme / longueur ;
}
//fonction qui trouve le max
float maxTableau(int *tableau, int longueur){										
	int i, max=0;
	
	for(i=0 ; i<longueur ; ++i){
		if(tableau[i]>max)
			max=tableau[i];
	}
	return max ;
}
//fonction qui trouve le min
float minTableau(int *tableau, int longueur){										
	int i, min=20;
	
	for(i=0 ; i<longueur ; ++i){
		if(tableau[i]<min)
			min=tableau[i];
	}
	return min ;
}

int main(){

	//déclaration des variables
	int longueur,valeur;
	float moyenne, max, min;
	//déclaration d'un tableau
	int *tableau;
	
	//initialisationdu Tableau
	tableau = (int(*))malloc(5*sizeof(int));
	//Remplissage du tableau
	remplirTableau(tableau, 5);
	//appel de la procédure d'affichage avec en paramètre et sa longueur
	afficheTableau(tableau,5);
	moyenne = moyenneTableau(tableau,5.0);
	printf("Moyenne du tableau : %.2f\n",moyenneTableau(tableau,5.0));
	printf("Max du tableau : %f.2\n",maxTableau(tableau,5));
	printf("Min du tableau : %f.2\n",minTableau(tableau,5));
	
	
	return 1;
	
}