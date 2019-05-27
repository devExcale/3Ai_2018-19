/*
Traccia: [16_2]
Leggere da tastiera un numero intero positivo e verificare se è un numero perfetto.
Visualizzare il numero e il messaggio che specifica se il numero è perfetto o meno.
Nota:
un numero è perfetto se è uguale alla somma dei suoi divisori,
ovviamente escluso il numero stesso.

Esempi:
 - 6 = 1+2+3; ma 1, 2 e 3 sono gli unici divisori di 6, di conseguenza 6 è un numero perfetto.
 - 12 <> 1+2+3+4+6=16, quindi 12 non è un numero perfetto.
*/
#include <stdio.h>

void main() {
    //Dichiarazione variabili
    int n, m=0, i=1;
    
    //Lettura numero
    do {
        printf("Inserire un numero: ");
        scanf("%d", &n);
    } while(n<1);
    
    //Ciclo che verifica se n è un numero perfetto
    while(i<n) {
        if(n%i==0) { m+=i; }
        i++;
    }
    
    //Caso speciale
    if(n==1) { m++; }
    
    //Visualizzazione dati finali
    if(m==n) { printf("%d e' un numero perfetto.\n", n); }
    else { printf("%d non e' un numero perfetto.\n", n); }
}   //main end