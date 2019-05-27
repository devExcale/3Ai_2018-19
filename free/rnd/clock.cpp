#include <stdio.h>
#include <windows.h>
#include <time.h>

void hi(int *p);

int main() {
	clock_t time = clock()/CLOCKS_PER_SEC;
	
	BYTE hello;
	short byte;
	
	int a, *ap;
	a = 5;
	ap = &a;
	
	*ap = 6;
	
	hi(ap);
	printf("%d", *ap);
	printf("%d", a);
	
	while(1) {
		if(time<clock()/CLOCKS_PER_SEC) {
			printf("\n%d", ui--);
			time = clock()/CLOCKS_PER_SEC;
		}
	}
	
	//byte = GetAsyncKeyState(VK_UP);
	
	//printf("%hi", byte);
	
	while(0) {
		if(time<clock()/CLOCKS_PER_SEC/2) {
			printf("Sono passati %llu secondi\n", clock()/CLOCKS_PER_SEC);
			
			time = 2*clock()/CLOCKS_PER_SEC/2/2;
		}
		//GetKeyboardState(&hello);
	}
}

void hi(int *p) {
	*p = 9;
	return;
}
