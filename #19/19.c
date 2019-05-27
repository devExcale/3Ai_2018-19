/*
Traccia: [19]
Scrivere un algoritmo che visualizzi i primi N termini della sequenza di Fibonacci.
La sequenza di Fibonacci è così fatta: 1 1 2 3 5 8 13 21 ..., i primi due termini
sono uguali ad 1 e ogni altro termine è dato dalla somma dei due precedenti.
I termini tra loro sono separati dal carattere '-'.
*/
#include <stdio.h>

void main() {
    //Dichiarazione variabili
    int N, t1=0, t2=1, i=1;
    //Lettura N con lettura in input
    do {
        printf("Inserire numero di termini da visualizzare: ");
        scanf("%d", &N);
    } while(N<1);
    //Calcolo e visualizzazione Sequenza
    printf("I primi %d termini della sequenza sono:\n\t", N);
    while(i<N) {
        printf("%d - ", t2);
        t2 += t1;
        t1 = t2 - t1;
        i++;
    }
    printf("%d", t2);
    printf("\n");
}