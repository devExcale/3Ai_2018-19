/* [24] */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//Inizializzazione randomizer
    srand(time(NULL));
    /* Dichiarazione variabili */
    int i=1, n, N=rand();
    
    printf("[Indovina il numero]\n\n");
    
    /* Number scaling */
    printf("Inserire numero massimo: ");
    scanf("%d", &n);
    N %= (n+1);
    printf("\n");
    
    /* Number guessing */
    do {
        printf("Tentativo %d: ", i);
        scanf("%d", &n);
        if(n==N) break;
        if(n<N) { printf("Il numero e' piu' grande!\n"); }
        else { printf("Il numero e' piu' piccolo!\n"); }
        i++;
    } while(i<=10);
    
    //Numero indovinato
    if(i<=10) printf("\nNumero indovinato in %d tentativi.\n", i);
	//Numero non indovinato
    else printf("\nNumero non indovinato. Il numero era %d.\n", N);
    
    /* Pause */
    getch();
    
    return 0;
}