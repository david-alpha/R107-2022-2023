    #include <stdio.h>
    #include <stdlib.h>
	
	
    int main() {
		
		//déclaration de variable
		FILE *f;
		char c;
		
		//Ouverture du fichier
		f=fopen("test.txt","rt");
		
		//boucle qui lit l'intégralité du fichier jusqu'à EOF End Of File
		while((c=fgetc(f))!=EOF){
			printf("%c",c);
		}
		
		//fermeture du fichier
		fclose(f);
		//Valeur de retour
		return 1;
    }