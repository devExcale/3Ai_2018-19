#include <stdio.h>
#define LEN 30

void readValues(float *arr);
float greaterValue(float *arr);
void printValues(float *arr);
void printLess15(float *arr);

void main() {
	
	float TEMP[LEN], res;
	int opcode;
	
	readValues(TEMP);
	
	while(1) {
		printf("Inserire opcode:\n1. Valore piu' alto\n2. Stampa tutti i valori\n3. Stampa i valori minori di 15 gradi\n");
		scanf("%d", &opcode);
		printf("\n");
		
		switch(opcode) {
			case 1:
				res = greaterValue(TEMP);
				printf("Il valore piu' grande e' %.2f", res);
				return;
			
			case 2:
				printf("I valori di Giugno sono:\n\t");
				printValues(TEMP);
				return;
			
			case 3:
				printf("I valori di Giugno minori di 15 gradi sono:\n\t");
				printLess15(TEMP);
				return;
		}
	}

}


void readValues(float *arr) {
	int i;
	for(i=0; i<LEN; i++) {
		printf("Inserire valore %d: ", i+1);
		scanf("%f", arr+i);
	}
}

float greaterValue(float *arr) {
	int i;
	
	float gv = *arr;
	for(i=1; i<LEN; i++)
		if(*(arr+i)>gv)
			gv = *(arr+i);
	
	return gv;
}

void printValues(float *arr) {
	int i;
	
	for(i=0; i<LEN; i++)
		printf("%.2f ", *(arr+i));
}

void printLess15(float *arr) {
	
	int i;
	
	for(i=0; i<LEN; i++)
		if(*(arr+i) < 15)
			printf("%.2f ", *(arr+i));
}



