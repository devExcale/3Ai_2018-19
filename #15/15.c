/*
Traccia: [15]
Leggere da tastiera un numero intero positivo e verificare se è primo.
In ogni caso visualizzare il numero seguito da un adeguato messaggio.
Un numero è primo solo se è divisibile per 1 e per se stesso,
quindi non deve avere altri divisori.
Esempi:
3, 7, 11 sono primi perché sono divisibili solo per 1 e per se stessi.
9 non è primo perché è divisibile per 1, per 3 e per se stesso.
*/
#include<stdio.h>

void main() {
    //Dichiarazione variabili
    int n, i=2;
    
    //Lettura numero
	do {
		printf("Inserire un numero: ");
		scanf("%d", &n);
    } while(n<2);
	
    //Ciclo che verifica se il numero non è primo
    while(i<n) {
        if(n%i==0) { printf("%d non e' un numero primo.\n", n); i=n;}
        i++;
    }
    
    //Verifica se il numero è primo
    if(n==i) { printf("%d e' un numero primo.\n", n); }

}   //main end