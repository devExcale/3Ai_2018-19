#include <stdio.h>

void readArr(char *arr, int len);
void printArr(char *arr, int len, const char* sep);
void replaceIn(char *arr, int len, char regex);

void main() {
	
	int n;
	char regex;
	
	do {
		printf("Inserire tot caratteri da leggere: ");
		scanf("%d",&n);
	} while(n<1);
	
	char chars[n];
	
	readArr(chars, n);
	
	printf("Inserire carattere da sostituire: ");
	scanf(" %c", &regex);
	replaceIn(chars, n, regex);
	
	printArr(chars, n, "\n");
	
}


void readArr(char *arr, int len) {
	int i;
	
	for(i=0; i<len; i++) {
		printf("Inserire carattere %d: ", i+1);
		scanf(" %c", arr+i);
	}
}

void printArr(char *arr, int len, const char* sep) {
	int i;
	
	for(i=0; i<len; i++)
		printf("%c%s", *(arr+i), sep);
}

void replaceIn(char *arr, int len, char regex) {
	int i;
	
	for(i=0; i<len; i++)
		if(*(arr+i) == regex)
			*(arr+i) = '*';
}
