/*
Traccia: [18]
Leggere due numeri interi e determinare il minimo comune multiplo (MCM).
Visualizzare il risultato preceduto da un messaggio.
*/
#include <stdio.h>

void main() {
    //Dichiarazione variabili
    int n, m, i=2, res;
    //Lettura numeri con controllo in input
    do {
        printf("Inserire due numeri: ");
        scanf("%d %d", &n, &m);
    } while(n<1 || m<1);
    //Predisposizione variabili
    if(n<m) {
        res = n;
        n = m;
        m = res;
    }
    res = n*m;
    //Calcolo mcm
    while(i<=res) {
        while(n%i==0 && m%i==0) {
            res /= i;
            n /= i;
            m /= i;
        }
        i++;
    }
    //Visualizzazione dati finali
    printf("Il mcm e': %d\n", res);
}