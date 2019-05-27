/*
Traccia:
Progettare un algoritmo che dato un valore numerico K,
legga N numeri e conti quanti di questi sono multipli
di K. Visualizzare il risultato preceduto da un messaggio.
*/
#include<stdio.h>

int main() {
    //Dichiarazione variabili
    int K, N, n, m=0, i=1;
    
    //Inizializzazione esercizio
    printf("Inserire il valore K e quanti numeri vogliono essere letti: ");
    scanf("%d %d", &K, &N);
    
    //Ciclo lettura e confronto
    while(i<=N) {
        printf("Inserire %d° numero: ", i);
        scanf("%d", &n);
        if(n%K==0 && n!=0) {
            m++;
        }
        i++;
    }
    
    //Visualizzazione dati finali
    printf("I multipli di %d inseriti sono %d.\n", K, m);
    return 0;
}   //main end