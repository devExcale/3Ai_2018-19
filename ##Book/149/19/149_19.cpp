/*	[149_19]
 *	Scrivere una funzione che, a partire dalle coordinate cartesiane
 *	di due punti, ne calcoli la distanza. Scrivere un programma che,
 *	dopo avere richiesto all'utente le coordinate di 3 punti nel piano
 *	cartesiano, calcoli il perimetro del triangolo avente i tre punti
 *	come vertici.
 */

#include <stdio.h>
#include <math.h>

typedef struct _COORD {
	int X;
	int Y;
	const int *pX = &X;
	const int *pY = &Y;
} COORD;

double distance(COORD A, COORD B);


int main() {
	
	// Variables declaration
	COORD A, B, C;
	double pp;
	
	// Coords reading
	printf("Inserire coordinate punto A: ");
	scanf("%d %d", A.pX, A.pY);
	printf("Inserire coordinate punto B: ");
	scanf("%d %d", B.pX, B.pY);
	printf("Inserire coordinate punto C: ");
	scanf("%d %d", C.pX, C.pY);
	
	// Perimeter computing
	pp = distance(A,B) + distance(B,C) + distance(C,A);
	
	// Print result
	printf("\nPerimetro triangolo: %.2lf\n", pp);
}


/* Distance between two points computing function */
double distance(COORD A, COORD B) {
	return sqrt( (A.X-B.X)*(A.X-B.X) + (A.Y-B.Y)*(A.Y-B.Y) );
}