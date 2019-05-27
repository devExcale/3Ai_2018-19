/*
Traccia: [69.13]
Progettare un algoritmo che, dato un valore numerico K, legga N coppie
di valori e conti quante di qieste coppie hanno come prodotto il valore K.
*/
#include <stdio.h>

void main() {
    //Dichiarazione variabili
	int N,          //Coppie da leggere
	    i=1,        //Contatore
	    iK=0;       //Contatore prodotti uguali a K
	double K,       //Prodotto campione
	    n,          //Fattore 1
	    m;          //Fattore 2
    
    //Lettura N e K
	do {
	    printf("Inserire il numero di coppie da analizzare: ");
	    scanf("%d", &N);
	} while(N<0);   //Controllo sull'input
	printf("Inserire il prodotto campione: ");
	scanf("%lf", &K);
	
	/*Ciclo di calcolo prodotto (con lettura dei fattori)
	    e confronto col campione */
	while(i<=N) {
	    printf("Inserire la %da coppia di fattori: ", i);
	    scanf("%lf %lf", &n, &m);
	    if(n*m==K) {iK++;}
	    i++;
	}
	
	//Visualizzazione dati finali
	printf("Le coppie con un prodotto uguale a %lf sono: %d", K, iK);
}