#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	FILE *fichier;
	char *tab[3];
	int i,c; 
	
	tab[0] = "toto";
	tab[1] = "titi";
	
	for(i=0; i<2;i++){
		printf("%s",tab[i]);
		printf("\n");
	}
	
	
	//Ecriture dans le fichier nommé ecriture1.txt (pas créé au démarrage)
	fichier = fopen("ecriture1.txt", "a+"); // ouvrir en ecriture
	if(fichier == NULL){
      printf("Impossible d'ouvrir le fichier resultat.txt\n");
      exit(1);
	}else{
	  //méthode en se plaçant à la fin
	  for(i=0; i<2;i++){
		fputs(tab[i], fichier);
		fseek(fichier, 0, SEEK_END);
		fputs("\n", fichier);
	  }
	  fseek(fichier, 0, SEEK_END);
	  fputs("fin de fichier\n", fichier);
	  
	}
	// fermeture du fichier
	if(fclose(fichier) == EOF) {
		printf("Probleme de fermeture du fichier resultat.txt\n");
		exit(1);
	}
  
	printf("les donnees ont ete stockees dans ecriture1.txt\n");
	
	//Ouverture du fichier
		fichier=fopen("ecriture1.txt","rt");
		
		//boucle qui lit l'intégralité du fichier jusqu'à EOF End Of File
		while((c=fgetc(fichier))!=EOF){
			printf("%c",c);
		}
		
		//fermeture du fichier
		fclose(fichier);
		//Valeur de retour
	return 1;
}