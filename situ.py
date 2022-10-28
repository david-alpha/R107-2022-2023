tableauNote = []
somme =0
for i in range(5):
    choix = (int)(input("Donner une note svp"))
    while(choix < 0 or choix > 20):
      choix = (int)(input("Attention, donner une note svp"))
    tableauNote.append(choix)
    somme = somme + choix
    
    
print(tableauNote) 
print("la moyenne est : ",somme/5)