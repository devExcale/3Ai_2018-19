/*
Traccia: [16_1]
Leggere da tastiera il peso e l'altezza di N persone.
Calcolare per ognuna l'indice di obesità (peso/altezza).
Si conti man mano il numero di quelle che hanno obesità
maggiore di un valore K prefisso.
Visualizzare il contatore preceduto da un adeguato messaggio.
*/
#include <stdio.h>

void main() {
	//Dichiarazione variabili
	int N, i=1, ik=0;
	double W, H, index, K;
	
	//Lettura N persone ed indice massimo
	do {
		printf("Digitare numero di persone da analizzare: ");
		scanf("%d", &N);
		printf("Digitare indice di obesita' massimo: ");
		scanf("%lf", &K);
	} while(N<1 && K<0);
	
	/*  Lettura altezza e peso, calcolo indice d'obesità ed
	    eventuale conteggio di indici maggiori con relativa
	    visualizzazione di dati finali                      */
	while(i<=N) {
		printf("Digitare altezza persona %d: ", i);
		scanf("%lf", &H);
		printf("Digitare peso persona %d: ", i);
		scanf("%lf", &W);
		index = W/H;
		printf("Indice di obesita' persona %d: %lf\n", i, index);
		if(index>K) { ik++; }
		i++;
	}
	
	//Visualizzazione conteggio di indici maggiori
	printf("Persone con indici d'obesita' maggiori di %lf: %d.", K, ik);
}   //main end