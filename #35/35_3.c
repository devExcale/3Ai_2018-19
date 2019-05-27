#include <stdio.h>

void conteggio(char *arr, int len, char *alpha);

void main() {
	// Dichiarazione variabili
	int n, i;
	char alpha[26];
	for(i=0; i<26; i++)
		alpha[i]=0;
	
	// Lettura lunghezza vettore
	printf("Inserire lunghezza vettore: ");
	scanf("%d", &n);
	// Dichiarazione vettore
	char LET[n];
	// Lettura elementi vettore
	for(i=0; i<n; i++) {
		printf("Inserire %do carattere: ", i+1);
		scanf(" %c", &LET[i]);
		// Leggi nuovamente se non è una lettera legale
		if( !(LET[i]>='a' && LET[i]<='z') && !(LET[i]>='A' && LET[i]<='Z') )
			i--;
	}
	// Elementi vettore toLowerCase
	for(i=0; i<n; i++)
		if(LET[i]<'a')
			LET[i] += 32;
	
	// Conteggio lettere
	conteggio(LET, n, alpha);
	
	// Stampa risultato finale
	for(i=0; i<26; i++)
		if(alpha[i])
			printf("La lettera %c/%c compare %d volte.\n", i+97, i+65, alpha[i]);
}

void conteggio(char *arr, int len, char *alpha) {
	int i;
	for(i=0; i<len; i++)
		alpha[arr[i]-97]++;
}
