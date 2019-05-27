/* Fare la somma di tutte le cifre di un numero e dire quante cifre ha */
#include <stdio.h>

void main() {
    //Dichiarazione variabili
    int N, i=0, c=0, res=0, less=0, k;
    //Lettura N con controllo in input
    do {
        printf("Inserire un numero: ");
        scanf("%d", &N);
    } while(N<=0);
    //Conteggio cifre di N
    int m = N;
    while(m>0) {
        i++;
        m /= 10;
    }
    c = i;
    //Calcolo somma cifre
    while(i>=1) {
        m = N;
        k = power(10, i);
        m = m/(k/10)-less;
        res += m;
        less = (less+m)*10;
        i--;
    }
    //Visualizzazione dati finali
    printf("Le cifre di %d sono: %d\n", N, c);
    printf("La somma delle cifre di %d e': %d\n", N, res);
}

//Power function
int power(int num, int esp) {
    int i=1, res=1;
    while(i<=esp) {
        res *= num;
        i++;
    }
    return res;
}