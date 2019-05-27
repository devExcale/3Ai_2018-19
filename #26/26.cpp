/* [25] */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define FIAMMIFERI printf("Fiammiferi rimanenti: %d\n", N);
#define PAUSE getch();

int main() {
	//Dichiarazione & init variabili
	int N,K, randK, pick, gameOn=1;
	char choice;
	srand(time(NULL));
	
	printf("[Matches game]\n");
	//Rules init
	printf("Inserire numero massimo generabile possibile: ");
	scanf("%d", &N);
	N = (rand()%N)+1;
	printf("Inserire numero massimo estraibile possibile: ");
	scanf("%d", &K);
	
	//Game on
	do {
		//Player's turn
		printf("\n\t[YOU]\n");
		FIAMMIFERI
		printf("Vuoi togliere i fiammiferi? [Y|N]\n");
		do {
			choice = getch();
			if(choice=='Y'||choice=='y') {
				randK = (rand()%K)+1;
				N -= randK;
				printf("Hai tolto %d fiammiferi.\n", randK);
			}
			if(choice=='N'||choice=='n'||N<=0) {
				printf("Tu hai perso!\n");
				gameOn=0;
			}
		} while(choice!='Y' && choice!='y' && choice!='N' && choice!='n');
		
		PAUSE
		
		//CPU's turn
		if(gameOn) {
			printf("\n\t[CPU]\n");
			FIAMMIFERI
			randK = (rand()%K)+1;
			N -= randK;
			printf("La CPU ha tolto %d fiammiferi.\n", randK);
			if(N<=0) {
				printf("La CPU ha perso!\n");
				gameOn=0;
			}
			
			PAUSE
		}
	
	}while(gameOn);
	
	return 0;
}
