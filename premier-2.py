from math import *
nombre =(int)(input("Donner un nombre : "))
nbDiviseur=0;
for i in range (1, (int)(sqrt(nombre))+1):
  if(nombre % i == 0):
    nbDiviseur +=1
    
if(nbDiviseur == 1):
  print("Le nombre est premier")
else :
  print("Le nombre n'est pas premier")