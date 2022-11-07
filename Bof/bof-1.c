#include <stdio.h>


void donner(char *ongName, int montant) {
    printf("Vous avez fait un don de %d euros a l'ONG %s.\n", montant, ongName);
}

int main(int argc, char *argv[]){
    char ong[8];
    int montant = 1000;
    printf("Faire un don\n-------------\n\n");
    printf("\t A quelle ONG souhaitez-vous faire votre don ?\n \t >  ");
    gets(ong);
    donner(ong, montant);
    printf("Un grand MERCI\n");
    return 0;
}
