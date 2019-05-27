/*
Traccia: [17.1]
Leggere due numeri interi da tastiera e moltiplicare il più grande per il più piccolo
attraverso il metdo delle successioni successive. Visualizzare il messaggio
"Il prodotto è: " seguito dal risultato ottenuto.
*/
#include <stdio.h>

void main() {
    //Dichiarazione variabili
    int n, m, i=1, res;
    //Lettura fattori
    printf("Inserire i due fattori: ");
    scanf("%d %d", &n, &m);
    //Predisposizione variabili
    if(m>n) {
        res = m;
        m = n;
        n = res;
    }
    res = 0;
    //Calcolo prodotto
    while(i<=m) {
        res += n;
        i++;
    }
    //Visualizzazione dati finali
    printf("Il risultato e': %d.\n", res);
}