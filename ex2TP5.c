#include <stdio.h> 
#include <stdlib.h> 

void bienvenue(){	
	printf("Bonjour et bienvenue dans mon super programme\n\n");	
}

int menu(){
	
	int choix, flag=0 ;
	printf("1 - Parite \n");
	printf("2 - Premier \n");
	do{
		if(flag>0)
			printf("attention le choix est soit 1 soit 2\n");
		scanf("%d",&choix);
		flag++;
	}while(choix<1 || choix >2);
	
	return choix ; 
}

int choixUtilisateur(int prog){
	
	int choixUtilisateur, flag=0 ;
	printf("Donner un nombre \n");
	if(prog == 1){
			scanf("%d",&choixUtilisateur);
	}
	if(prog == 2){
		do{
			if(flag>0)
				printf("attention le choix est entier positif > 1\n");
			scanf("%d",&choixUtilisateur);
			flag++;
		}while(choixUtilisateur < 1);
		
	}
	
	return choixUtilisateur;
}

int parite(int test){
	//renvoie 1 si pair, 0 si impair
	
	if(test%2==0)
		return 1;
	
	return 0;
}
int premier(int test){
	//renvoie 1 si premier, 0 sinon
	int i,nbDiviseur=1;

	for(i=2;i<test+1;i++){
		if(test%i==0)//est-ce que i divise nombre ?
				nbDiviseur ++ ; 		
		}
	if(nbDiviseur==2)
		return 1;
	return 0;

}


int main(){

	bienvenue();
	int choix = menu();
	int nombre = choixUtilisateur(choix);
	
	if(choix == 1){
		if(parite(nombre)==1){
			printf("Le nombre %d est pair\n", nombre);
		}else{
			printf("Le nombre %d est impair\n", nombre);
		}
	}
	if(choix == 2){
		if(premier(nombre)==1){
			printf("Le nombre %d est premier\n", nombre);
		}else{
			printf("Le nombre %d n'est pas premier \n", nombre);
		}
	}
	return 0;
}