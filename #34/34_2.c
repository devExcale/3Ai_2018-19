#include <stdio.h>
#define LEN 20

int main() {
	
	// Dichiarazione variabili
	int num[LEN],
		oddSum = 0,
		evenSum = 0,
		i;
	
	// Inizializzazione elementi vettore
	for(i=0; i<LEN; i++) {
		printf("Inserire numero %d: ", i+1);
		scanf("%d", &num[i]);
	}
	
	// Somme pari e dispari
	for(i=0; i<LEN; i++)
		if(num[i]%2)
			oddSum += num[i];
		else
			evenSum += num[i];
	
	// Stampa risultato finale
	printf("\nLa somma dei numeri pari e' %d\nLa somma dei numeri dispari e' %d\n", evenSum, oddSum);
}
