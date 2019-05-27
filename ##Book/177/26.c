#include <stdio.h>
#include <stdint.h>
#define BARCODE_LEN 13

void readBarcode(int* barcode);
uint8_t digitBarcode(int* barcode);

void main() {
	
	int barcode[BARCODE_LEN];
	
	readBarcode(barcode);
	
	printf("Cifra di controllo: %d", digitBarcode(barcode));
	
}

void readBarcode(int* barcode) {
	int i;
	for(i=0; i<BARCODE_LEN-1; i++)
		do {
			printf("Inserire cifra %d barcode: ", i+1);
			scanf("%d", barcode+i);
		} while(*(barcode+i)<0 || *(barcode+i)>9);
}

uint8_t digitBarcode(int* barcode) {
	int i, sum=0;
	for(i=0; i<BARCODE_LEN-1; i++) {
		if(i%2)
			*(barcode+i) *= 3;
		sum += *(barcode+i);
	}
	return sum%10;
}