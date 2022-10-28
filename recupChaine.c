#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

	//déclaration des variables
	char mot[100];
	int i,j;
	int flag = 1; //palindrome
	
	printf("Quel est votre mot ? ");
    fgets(mot, 100, stdin);
    printf("Votre mot est %s !\n\n", mot);
    printf("Taille de la chaine %d\n", strlen(mot));
	
	j = strlen(mot)-2;
	for(i=0; i <strlen(mot)-1 ; i++){
		printf("\nvaleur de i : %d, caractere %c\n",i, mot[i]);
		printf("valeur de j : %d, caractere %c\n",j, mot[j]);
		if(mot[i]!=mot[j])
			flag--;	
	
	j--;
	}
	if(flag==1){
		printf("palindrome \n");
	}else{
		printf("pas palindrome \n");
	}
	return 1;
	
}