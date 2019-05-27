/*
Traccia: [17.2]
Leggere due numeri 'N' e 'K' interi positivi e dividere il più grande per il più
piccolo attraverso il metodo delle sottrazioni successive. Visualizzare il
quoziente e il resto preceduti dal seguente messaggio: "Il quoziente e il resto
della divisione tra 'N' e 'K' sono: "
*/
#include <stdio.h>

void main() {
    //Dichiarazione variabili
    int N, K, q, r;
    //Lettura 'N' e 'K' con controllo in input
    do {
        printf("Inserire due numeri: ");
        scanf("%d %d", &N, &K);
    } while(N<=0 || K<=0);
    //Predisposizione variabili
    if(K>N) {
        q = N;
        N = K;
        K = q;
    }
    q = 0;
    //Calcolo quoziente
    while(r+K<=N) {
        r += K;
        q++;
    }
    //Calcolo resto
    r = N-r;
    //Visualizzazione dati finali
    printf("Il quoziente e il resto della divisione tra %d e %d sono: %d, %d.\n", N, K, q, r);
}