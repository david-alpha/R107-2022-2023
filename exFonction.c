#include <stdio.h>
#include <time.h>

void bienvenue(){
	
	printf("Bonjour et bienvenu dans mon super programme\n\n");
	
}

int triple(int x){
	
	return 3*x;
	
}

int main ()
{
	int nb ;
	
	bienvenue();
	scanf("%d", &nb);
	printf("le triple du nombre choisi est %d\n\n",
	triple(nb));
   
   return 0;
}