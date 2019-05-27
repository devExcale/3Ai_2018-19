/*
Traccia: [69.12]
Progettare un algoritmo che, leggendo N valori numerici,
verifichi se essi sono forniti in ordine crescente o meno.
*/
#include <stdio.h>

void main() {
    //Dichiarazione variabili
    int N, i=1;
    double n, m;
    
    //Lettura N ed N numeri
    do {
        printf("Inserire la quantita' di numeri che si vogliono leggere: ");
        scanf("%d", &N);
    } while(N<2);
    printf("Inserire %do numero: ", i);
    scanf("%lf", &m);
    i++;
    while(i<=N) {
        printf("Inserire %do numero: ", i);
        scanf("%lf", &n);
        i++;
        if(n<m) {i=N*2;}
        m = n;
    }
    
    //Verifica dell'ordine crescente della sequenza
    if(i==N*2) { printf("La sequenza non e' stata immessa in ordine crescente.\n"); }
    else { printf("La sequenza e' stata immessa in ordine crescente.\n"); }
}