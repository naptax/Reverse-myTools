#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void donne(int montant){  
   char ong[256];         
   
   printf("A quelle ONG spuhaitez-vous faire un don ? \n");
   gets(ong);
   printf("Vous avez fait un don de %d euros a l'ONG %s.\n", montant, ong);
}


int main(int argc, char *argv[]){
    int montant = 1000;

        donne(montant);
        printf("Un grand MERCI cher donnateur !\n");                        
        exit(0);
    }




  