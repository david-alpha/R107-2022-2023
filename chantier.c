#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

int main() {
	
	//déclaration des variables
	float quantite,camion, transportDupond, transportMartin, prixDupond, prixMartin ;
	//Fin déclaration variables
	
	printf("quelle quantite, souhaitez-vous\n");
	scanf("%f",&quantite); 			//Récupération de la quantité
	camion = ceil(quantite/10);		// Calcul du nb de transport 
	//Calcul du prix du transport
	transportDupond = ((camion * 10)*0.1)*1.2 ;
	transportMartin = ((camion * 20)*0.1)*1.2 ;
	//Calcul du prix total : sable + transport
	if(quantite < 8){
		prixDupond = transportDupond + quantite * 78 ;
	}else{
		prixDupond = transportDupond + (quantite * 78)*0.9 ;
	}
	if(quantite < 20){
		prixMartin = transportMartin + quantite * 73 ;
	}else{
		prixMartin = transportMartin + (quantite * 73)* 0.7 ;		
	}
	//comparaison des deux entreprises
	if(prixDupond < prixMartin){
		printf("l'entreprise Dupond est plus avantageuse %f que l'entreprise Martin %f \n", prixDupond, prixMartin );
	}else{
		printf("l'entreprise Martin est plus avantageuse %f que l'entreprise Dupond %f \n", prixMartin, prixDupond  );
	}
	
return 0;
}