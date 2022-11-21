// Buffer Over Flow
// Exemple I
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



void donne(int montant){  
   char ong[15];         
   
   printf("A quelle ONG spuhaitez-vous faire un don ? \n");
   gets(ong);

/*
   strcpy(ong, ongName);    // Ici on copie une chaine de caracteres dans une zone memoire de 15
                            // On va donc deborder sur le contenu qui suit juste derriere dans la stack
                            // et comme on appelle une fonction (printf), ce qui suit juste derriere ONG,
                            // c'est la sauvegarde de EIP avant le CALL de printf 

                            // So ==> je peux ecrire une adresse de mon choix en ecrasant la valeur a cette adresse et sera le 
                            // nouvel EIP au moment du return du print
                            // QUESTION : QUELLE ADRESSE
*/

   printf("Vous avez fait un don de %d euros a l'ONG %s.\n", montant, ong);
}


int main(int argc, char *argv[]){
    int montant = 1000;

        donne(montant);
        printf("Un grand MERCI !\n");                        
        exit(0);
    }




  