/*
	Traccia:
	Leggere da tastiera un numero A e un numero N e visualizzare
	tutti i multipli di A minori di N. I multipli devono essere
	visualizzati in colonna.
	I numeri memorizzati rispettivamente in A e in N sono interi.
*/

#include<stdio.h>

int main() {
	//Dichiarazione variabili
	int A, N, i, mult;			//mult: multiplo
	//Assegnazione variabili
	i=1;
	printf("Inserisci due numeri: ");
	scanf("%d %d", &A, &N);
	//Visualizzazione multipli
	if(A<N) {
	    printf("I multipli di %d minori di %d sono: \n", A, N);
		do {
			mult=A*i;
			printf("%d. '%d'\n", i, mult);
			i++;
		} while(A*i<N);
	} else {
		printf("'%d' non ha multipli minori di '%d'\n", A, N);
	}
	return 0;
}	//end main