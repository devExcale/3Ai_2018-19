/*
Traccia:
Progettare un algoritmo che legga una sequenza di valori
numerici fino a quando la loro somma è minore di 100 e
scriva la somma di quanti sono i valori letti.
*/
#include<stdio.h>

int main() {
    //Dichiarazione variabili
    float n, sum=0.0F;
    int i=0;
    
    //Ciclo lettura valori
    do {
        printf("Inserire un numero: ");
        scanf("%f", &n);
        sum=sum+n;
        i++;
    } while(sum<100);
    
    //Visualizzazione dati finali
    printf("I valori letti sono stati %d.\n", i);
    return 0;
}   //main end