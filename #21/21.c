/* Printed N sided cube */
#include <stdio.h>

void main() {
    /* Variables declaration */
    int i=1, j=1, N;
    
    /* N reading with input control */
    do {
        printf("Inserire un numero: ");
        scanf("%d", &N);
    } while(N<0);
    
    /* Cube construction */
    while(i<=N) {                               //Columns construction
        while(j<=N) { printf("* "); j++; }      //Rows construction
        printf("\n");
        i++; j=1;       //Counter increase, reset
    }
}