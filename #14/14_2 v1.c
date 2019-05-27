/*
Traccia: [14_2 v1]
Scrivere l’algoritmo che visualizzi i primi N termini
della seguente successione:
9, 7, 8, 6, 7, 5, 6, ...
NOTA: N deve essere un numero pari.
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
    if(N%2==0 && N!=0) { //N pari
        while(i<=N) {
            printf("%d, ", S);
            S = S-2;
            printf("%d, ", S);
            S++;
            i = i+2;
        }
        printf("\n");
    } else {
        printf("Il numero dei termini da visualizzare deve essere pari e diverso da 0.\n");
    }
    
    return 0;
}   //main end