/*
	Traccia:
	Acquisire da tastiera le temperature massime giornaliere
	del mese di novembre. Determinare la temperatura media e
	visualizzarla preceduta da un messaggio.
*/

#include<stdio.h>

int main() {
	//Dichiarazione variabili
	int i, T, Ttot;
	float Tm;
	i=0;
	Ttot=0;
	//Inserimento dati
	while(i<30) {
		i++;
		printf("Inserire temperatura massima giorno %d: ", i);
		scanf("%d", &T);
		Ttot=Ttot+T;
	}
	Tm=(float)Ttot/30;
	printf("La temperatura massima media di novembre e': %f.\n", Tm);
	return 0;
}	//end main