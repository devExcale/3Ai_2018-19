#include <stdio.h>

void sottosequenza(int *arr, int len, int* _start, int* _end, int* _sublen);

void main() {
	// Dichiarazioni variabili
	int n, i, start, end, sublen;
	
	// Lettura lunghezza vettore
	printf("Inserire lughezza vettore: ");
	scanf("%d", &n);
	// Dichiarazione vettore
	int SQ[n];
	// Lettura elementi vettore
	for(i=0; i<n; i++) {
		printf("Inserire %do valore: ", i+1);
		scanf("%d", &SQ[i]);
	}
	
	// Controllo sottosequenza
	sottosequenza(SQ, n, &start, &end, &sublen);
	
	// Stampa risultato finale
	printf("La sottosequenza crescente piu' lunga e': (%d/%d)\n", start, end);
	for(i=start; i<=end; i++)
		printf("%d ", SQ[i]);
	printf("\b\n");
}

void sottosequenza(int *arr, int len, int* _start, int* _end, int* _sublen) {
	int start=0, end=0, sublen=1, i;
	char conta=1;
	for(i=1; i<len; i++) {
		if(arr[i]>arr[i-1]) {
			if(!conta) {
				conta = 1;
				start = i-1;
			}
			end = i;
			sublen++;
		} else {
			conta = 0;
		}
		if(!conta && sublen>_sublen) {
			*_start = start;
			*_end = end;
			*_sublen = sublen;
			sublen = 0;
		}
	}
	if(conta) {
		*_start = start;
		*_end = end;
		sublen = sublen;
	}
}
