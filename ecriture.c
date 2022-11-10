#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  FILE *fic; 
  int i=0;

  // ouverture du fichier
  fic = fopen("resultat.txt", "w"); // ouvrir en ecriture
  if(fic == NULL){
      printf("Impossible d'ouvrir le fichier resultat.txt\n");
      exit(1);
  }

  while(i<10){
    fputs("toto", fic);
	i++;
  }

  // fermeture du fichier
  if(fclose(fic) == EOF) {
      printf("Probleme de fermeture du fichier resultat.txt\n");
      exit(1);
  }
  
  printf("les donnees ont ete stockees dans resultat.txt\n");

  return 0;
  
}