#include <stdio.h>

void leggiV(float* arr, int len);
int maggioriMedia(float* arr, int len);
void allocaMaggioriMedia(float* arr, int len, float* newArr, int newLen);
float mediaV(float* arr, int len);
void printArray(float* arr, int len, const char* title);


void main() {
	int n;
	
	do {
		printf("Inserire lunghezza vettore: ");
		scanf("%d", &n);
	} while(n<2);
	
	float v[n];
	leggiV(v, n);
	
	int w = maggioriMedia(v, n);
	float maggiori[w];
	
	allocaMaggioriMedia(v, n, maggiori, w);
	
	printArray(v, n, "Originale");
	printArray(maggiori, w, "Nuovo");
}


void leggiV(float* arr, int len) {
	int i;
	for(i=0; i<len; i++) {
		printf("Inserire valore %d: ", i+1);
		scanf("%f", arr+i);
	}
}

int maggioriMedia(float* arr, int len) {
	float media = mediaV(arr, len);
	int i, n=0;
	
	for(i=0; i<len; i++)
		if( *(arr+i) > media )
			n++;
	
	return n;
}

void allocaMaggioriMedia(float* arr, int len, float* newArr, int newLen) {
	float media = mediaV(arr, len);
	int i, j=0;
	
	for(i=0; i<len; i++)
		if( *(arr+i) > media )
			*(newArr+j++) = *(arr+i);
	
}

void printArray(float* arr, int len, const char* title) {
	int i;
	printf("%s:\n\t", title);
	for(i=0; i<len; i++)
		printf("%.2f ", *(arr+i));
	printf("\n");
}

float mediaV(float* arr, int len) {
	int i;
	float sum = 0.0F;
	for(i=0; i<len; i++)
		sum += *(arr+i);
	return sum /= (len * 1.0F);
}
