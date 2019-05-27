#include <stdio.h>
#include <conio.h>

float tempConvert(double x, bool method);

int main() {
	// Dichiarazione variabili
	float temp = 1;
	bool method;
	
	printf("[Temperature converter]\n");
	
	// Lettura metodo conversione
	printf("Inserire metodo di conversione:\n");
	printf("c: Fahrenhite ---> Celcius | f: Celcius ---> Fahrenhite");
	do {
		switch (getch()) {
			case 'c':
			case 'C':
				method = 1;
				temp = 0;
			break;
			
			case 'f':
			case 'F':
				method = 0;
				temp = 0;
			break;
		}
	} while(temp);
	
	// Scrittura metodo
	for(int i=0; i<100; i++) printf("\b \b");
	if (method) printf("Fahrenhite ---> Celcius\n");
	else printf("Celcius ---> Fahrenhite\n");
	
	// Lettura temperatura
	printf("Inserire temperatura: ");
	scanf("%f", &temp);
	
	// Conversione e visualizzazione
	temp = tempConvert(temp, method);
	printf("La temperatura e': %.2f", temp);
}

// Funzione conversione
float tempConvert(double x, bool method) {
	if(method) return (x-32)*5/9;
	else return (9/5*x)+32;
}
