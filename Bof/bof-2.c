// Buffer Over Flow
// Exemple II
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void donner(char *ongName, int montant) {
    printf("Vous avez fait un don de %d euros a l'ONG %s.\n", montant, ongName);
}

int main(int argc, char *argv[]){
    char ong[8];
    int montant = 1000;
 
    if (argc!=1) 
        strcpy(ong,argv[1]);        // Aie, aie, aie
    else
    {
        printf("\n\tusage: %s <destinataire>\n\n",argv[0]);
        exit(0);
     }

    donner(ong, montant);
    printf("Un grand MERCI\n");
    return 0;
}
