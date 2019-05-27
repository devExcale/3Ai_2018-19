/*
Traccia: [67.16]
Una leggenda orientale narra di un matematico che, in cambio di alcuni servigi resi
al re, chiese la seguente ricompenza: <<un chicco di riso per la prima casella di una
scacchiera, due chicchi di riso per la seconda casella di una scacchiera, quattro
chicchi di riso per la terza casella... e così via per tutte le 64 caselle della scacchiera>>.
Progettare un algoritmo che, a partire dal numero N di caselle che si intendono riempire,
calcoli il numero complessivo di chicchi di riso che spettano come ricompensa.
*/
#include <stdio.h>

void main() {
    //Dichiarazione variabili
    int N,      //Numero di caselle da riempire
        i=1,    //Contatore
        r=0;    //Reward (Ricompensa)
    
    //Lettura N caselle
    printf("Inserire quante caselle si vogliono riempire: ");
    scanf("%d", &N);
    
    //Calcolo ricompensa
    if(i==1) {r++;}
    while(i<N) {
        if(i%2!=0) {r++;}
        else {r+=2;}
        i++;
    }
    
    //Visualizzazione dati finali
    printf("I chicchi di riso che spettano come ricompensa per riempire %d caselle sono: %d\n", N, r);
}