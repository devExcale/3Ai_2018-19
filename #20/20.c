/*
Traccia: [20]
Leggere da tastiera N coppie di numeri interi, terminare la lettura quando il
primo dei due numeri risulta uguale a zero. Contare le coppie il cui prodotto è
multiplo di un numero intero K letto da tastiera. Visualizzare il contatore
preceduto da un opportuno messaggio.
*/
#include <stdio.h>

void main() {
    /* Dichiarazione variabili */
    int n, m, K, i=0;
    
    /* Lettura K */
    printf("Inserire un numero: ");
    scanf("%d", &K);
    
    /* Lettura N coppie */
    do {
        printf("Inserire una coppia di numeri: ");
        scanf("%d %d", &n, &m);
        if(n*m==K) { i++; }		//Conteggio prodotti multipli K
    } while(n!=0);
    
    /* Visualizzazione dati finali */
    printf("Le coppie di numeri con prodotto uguale a %d sono %d.\n", K, i);
}