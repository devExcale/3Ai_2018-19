#include <stdio.h>

void invert(int *arr, int len);

void main() {
	// Dichiarazione variabili
	int n, i, w;
	// Lettura lunghezza vettore
	printf("Inserire lunghezza vettore: ");
	scanf("%d", &n);
	
	// Dichiarazione vettore
	int vet[n];
	// Lettura elementi vettore
	for(i=0; i<n; i++) {
		printf("Inserire %d° valore: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	// Stampa vettore originale
	for(i=0; i<n; i++)
		printf("%d ", vet[i]);
	printf("\n");
	// Inversione elementi vettore
	invert(vet, n);
	// Stampa vettore invertito
	for(i=0; i<n; i++)
		printf("%d ", vet[i]);
	printf("\n");
}

void invert(int *arr, int len) {
	int w, i;
	for(i=0; i<len/2; i++) {
		w = arr[i];
		arr[i] = arr[len-i-1];
		arr[len-i-1] = w;
	}
}
