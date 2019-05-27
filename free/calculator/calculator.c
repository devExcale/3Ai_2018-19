/* Calculator proj */
#include <stdio.h>
#include <windows.h>

int main() {
	/* Bar title setting */
	SetConsoleTitle("Calculator");
	
	/* Variables declaration */
	double n1, n2;
	int op;
	
	/* Menù */
	printf("\nInserire il codice dell'operazione\n\n\t1. Addizione\n\t2. Sottrazione\n\t3. Moltiplicazione\n\t4. Divisione\n\t5. Modulo\n\t6. Potenza\n\t7. Radice\n\n\t8. Exit\n");
	switch (op) {
		case 1:
			add();
		break;
			
		case 2:
			diff();
		break;
	}
}

void add() {
	printf()
}

void cls() {
	for(int i=0; i<10; i++) { printf("\n");	}
}
