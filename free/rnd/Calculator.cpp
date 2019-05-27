#include <stdio.h>
#include <conio.h>
#include <windows.h>

void Add();
void Sub();
void Mult();
void Div();
void Mod();

int main() {
	
	char r = getch();
	printf("%d - %c\n", r, r);
	
	// Variables declaration
	bool vcc = 1, inputControl = 1;
	
	// Menu
	do {
		printf("[Calculator]\n");
		printf("1. Addizione\n");
		printf("2. Sottrazione\n");
		printf("3. Moltiplicazione\n");
		printf("4. Divisione\n");
		printf("5. Modulo\n");
		printf("\nQ. Exit\n");
		
		do {
			switch (getch()) {
				
				case '1':
					system("cls");
					Add();
					system("cls");
					inputControl = 0;
				break;
				
				case '2':
					system("cls");
					Sub();
					system("cls");
					inputControl = 0;
				break;
				
				case '3':
					system("cls");
					Mult();
					system("cls");
					inputControl = 0;
				break;
				
				case '4':
					system("cls");
					Div();
					system("cls");
					inputControl = 0;
				break;
				
				case '5':
					system("cls");
					Mod();
					system("cls");
					inputControl = 0;
				break;
				
				case 'Q':
				case 'q':
					inputControl = 0;
					vcc = 0;
				break;
			}
			
		} while(inputControl);
		
		inputControl = 1;
		
	} while(vcc);
	
	
}

void Add(void) {
	
	double x, y;
	
	printf("Inserire primo addendo: ");
	scanf("%lf", &x);
	printf("Inserire secondo addendo: ");
	scanf("%lf", &y);
	
	printf("Il risultato e': %.2lf", x+y);
	getch();
}

void Sub(void) {
	
	double x, y;
	
	printf("Inserire sottraendo: ");
	scanf("%lf", &x);
	printf("Inserire minuendo: ");
	scanf("%lf", &y);
	
	printf("Il risultato e': %.2lf", x-y);
	getch();
}

void Mult(void) {
	
	double x, y;
	
	printf("Inserire primo fattore: ");
	scanf("%lf", &x);
	printf("Inserire secondo fattore: ");
	scanf("%lf", &y);
	
	printf("Il risultato e': %.2lf", x*y);
	getch();
}

void Div(void) {
	
	double x, y;
	
	printf("Inserire dividendo: ");
	scanf("%lf", &x);
	printf("Inserire divisore: ");
	scanf("%lf", &y);
	
	printf("Il risultato e': %.2lf", x/y);
	getch();
}

void Mod(void) {
	
	
	int x, y;
	
	printf("Inserire dividendo: ");
	scanf("%d", &x);
	printf("Inserire divisore: ");
	scanf("%d", &y);
	
	printf("Modulo: %d | Divisione: %d", x%y, x/y);
	getch();
}
