#include <stdio.h>

int main() {
	
	// Dichiarazione variabili
	int n, i;
	
	// Lettura lunghezza vettore
	printf("Inserire lunghezza vettore: ");
	scanf("%d", &n);
	// Dichiarazione vettore e variabile sommatore
	double vet[n], sum = 0.0;
	
	// Inizializzazione vettore
	for(i=0; i<n; i++) {
		printf("Inserire numero %d: ", i+1);
		scanf("%lf", &vet[i]);
	}
	// Somma elementi vettore
	for(i=0; i<n; i++)
		sum += vet[i];
	
	// Stampa risultato finale
	printf("La somma dei numeri e' %lf", sum);
}
