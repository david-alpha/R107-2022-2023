#include <stdio.h>
#include <stdlib.h>

int main(){
	//déclarations
	int i,j,sommeDiviseur;
	
	for(i=1;i<10001;i++){
		sommeDiviseur=0;
		for(j=1;j<i+1;j++){
			if(i%j==0)
				sommeDiviseur += j ; 
			//sommeDiviseur = sommeDiviseur+j	
		}
		if(sommeDiviseur/2==i)
			printf("le nombre %d est parfait \n",i);	
	}
	return 0;
}