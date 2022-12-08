#include <stdlib.h>
#include <stdio.h>
#include <strings.h>


#define MAX_LEN_MSG 4096

typedef unsigned char u_char;

void initialize(u_char *State);
void swap(u_char *a, u_char *b);
void ksa(u_char *State, u_char *key, int keylen) ;
u_char * prng(u_char *State, int msglength);
void rc4(u_char *key, u_char *input, u_char *output, int msglen);

int main(int argc, char *argv[]) {

    u_char input[MAX_LEN_MSG];		// Données en entrée
    u_char output[MAX_LEN_MSG];	    // Données en sortie

    int msglength = strlen(argv[1]); // Longueur du message a chiffrer ou dechriffer

    if (msglength > MAX_LEN_MSG) {
        printf("Desolé mais je ne traite que des messages d'une taille maximum de %d caractères ", MAX_LEN_MSG);
        exit(-1);
    }

    memset(input,0, MAX_LEN_MSG);
    memset(output,0, MAX_LEN_MSG);

    strncpy((char *) input, argv[1], msglength);

    /****** A NE PAS FAIRE *****/
    u_char *key = "password";

    printf("Cle RC4 = %s ", key);

    // LE CHIFFREMENT
    printf("\n\n#### Chiffrement ####");
    printf("\n --| Message a chiffrer = %s ", input);

    rc4(key, input, output, msglength);
    printf("\n --| Message CHIFFRE (en hexa) = ");
    for (int i = 0; i < msglength ; i ++) {
        printf(" %02x", output[i]);
    }


    printf("\n\n #### Dechiffrement ####");
    // LE DECHIFFREMENT
    printf("\n --| Message a dechiffrer (en hexa) = ");
    for (int i = 0; i < msglength ; i ++) {
        printf(" %02x", output[i]);
    }
    rc4(key, output, input, msglength);
    printf("\n --| Message DECHIFFRE = %s \n", input);

    exit(0);
}

/*  +++++++++++++++ CYBER CHEF  CORNER +++++
 *  Pour verifier la validite de mon implementation : https://gchq.github.io/CyberChef/#recipe=RC4(%7B'option':'UTF8','string':'password'%7D,'Hex','UTF8')&input=YmUgYjcgN2IgNGEgMDkgNzggZjMgZTYgMjggMWEgZTcgMzEgN2MgMDQgZmY
 */ ++++++++++++++++++++++++++++++++++++++++++

/* Initialise le tableau d'état */
void initialize(u_char *State) {
    int i;

    printf("\n\n --| E T A P E   1 : Initialisation du tableau d etat \n");
    for(i=0; i<256; i++) {
        State[i] = i;
        printf("[%d] ", State[i]);
    }
}

/* Echange les valeurs de i et de j */
void swap(u_char *i, u_char *j) {
    u_char temp;

    temp = *i;
    *i = *j;
    *j = temp;
}

/* KSA */
void ksa(u_char *State, u_char *key, int keylen) {
    int i, j=0;
    printf("\n\n -- | E T A P E   2 : Post KSA\n");
    for(i=0; i<256; i++) {
        j = (j + State[i] + key[i%keylen]) % 256;
        swap(&State[i], &State[j]);
        printf("[%d] ", State[i]);
    }
}

/* Pseudo-random number generator: Generate the keystream */
u_char * prng(u_char *State, int msglength) {
    int i=0, j=0, k;

    u_char *keystream;

    printf("\n\n --| E T A P E   3 : PRNG, generation du keystream \n\n");

    keystream = (u_char *)malloc(sizeof(u_char)*msglength);

    for(k=0; k<msglength; k++) {
        i = (i+1) % 256;
        j = (j+State[i]) % 256;

        swap(&State[i], &State[j]);

        keystream[k] = State[(State[i]+State[j]) % 256];
        printf("[%d] ", keystream[k]);
    }
    return keystream;
}

/* Chiffre ou déchiffre */
void rc4(u_char *key, u_char *input, u_char *output, int msglen) {
    int i;
    u_char State[256];
    u_char *keystream;

    int keylen = sizeof(key)/sizeof(key[0]);

    // 1. Initialise mon tableau d'état
    initialize(State);

    // 2.
    ksa(State, key, keylen);

    // 3. Generation du Keystream avec un PRNG
    keystream = prng(State, msglen);

    // 4. XOR "membre a membre" entre l input et le Keystream
    printf("\n\n --| E T A P E   4 : XOR avec le keystream \n\n");
    for(i=0; i<msglen; i++) {
        output[i] = input[i] ^ keystream[i];
        printf("[%d] ", output[i]);
    }
}