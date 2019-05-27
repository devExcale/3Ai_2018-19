#include <stdio.h>

int main() {
	
	// Dichiarazione variabili
	int k, i, counter = 0;
	
	// Lettura dimensione vettore
	printf("Inserire quantita' di caratteri da leggere: ");
	scanf("%d", &k);
	// Dichiarazione vettore
	char car[k];
	// Inizializzazione vettore
	for(i=0; i<k; i++) {
		printf("Inserire carattere %d: ", i+1);
		scanf(" %c", &car[i]);
	}
	
	// Conteggio vocali minuscole
	for(i=0; i<k; i++)
		switch(car[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				counter++;
			break;
		}
	
	// Stampa risultato finale
	printf("\nLe vocali minuscole sono %d\n", counter);
}
