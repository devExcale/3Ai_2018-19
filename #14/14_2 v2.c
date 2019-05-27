/*
Traccia: [14_2 v2]
Scrivere l’algoritmo che visualizzi i primi N termini
della seguente successione:
9, 7, 8, 6, 7, 5, 6, ...
*/
#include<stdio.h>

int main() {
    //Dichiarazioni variabili
    int S=9;
    unsigned int N, i=1;
    
    //Lettura N
    printf("Inserire quanti termini si vogliono visualizzare: ");
    scanf("%d", &N);
    
    //Visualizzazione N termini della successione
    while(i<=N) {
        i++;
        printf("%d, ", S);
        if(i%2==0) { S = S-2; }
        else { S++; }
    }
    printf("\n");
    
    return 0;
}   //main end