#include <stdio.h>

bool prime(unsigned long long n);

int main() {
	
	FILE * fPrimes;
	unsigned long long int n;
	fPrimes = fopen("C:\\Users\\Emanuele\\Desktop\\Primes.txt", "a");
	
	printf("Insert starting number: ");
	scanf("%llu", &n);
	n+=2;
	
	while(1) {
		
		if(prime(n)) {
			printf("%llu\n", n);
			fprintf(fPrimes, "%llu\n", n);
		}
		n+=2;
	}
}

bool prime(unsigned long long n) {
	unsigned long long i=2;
	while(i<=n/2) {
		if(n%i++==0) return false;
	}
	return true;
}
