// Buffer Over Flow
// Exemple II
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]){
    char ong[8];
    int montant = 1000;

    if (argc==2) {
        strcpy(ong, argv[1]);        // Aie, aie, aie
        printf("Vous avez fait un don de %d euros a l'ONG %s.\n", montant, ong);
        printf("Un grand MERCI !\n");
        return 0;
    }
    else
    {
        printf("\n\tusage: %s <destinataire>\n\n",argv[0]);
        exit(0);
    }


}
