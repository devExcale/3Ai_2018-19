/*
Traccia: [14_1]
Un cliente, al supermercato, acquista N prodotti. Acquisire da tastiera
il prezzo di ogni prodotto e determinare il costo totale della spesa.
Se l’importo da pagare supera 100 euro applicare lo sconto del 15%.
Visualizzare :
•   l’importo totale e non scontato preceduto da un messaggio;
•   su nuova riga, eventualmente l’importo scontato preceduto da un messaggio.
*/
#include<stdio.h>

int main() {
    //Dichiarazione variabili
    int N, i=1;
    float C, Ct=0.0F;
    
    //Lettuta pezzi e costo
    printf("Dichiarare numero pezzi acquistati: ");
    scanf("%d", &N);
    while(i<=N && N>0) {
        printf("Inserire costo pezzo %d: ", i);
        scanf("%f", &C);
        Ct = Ct+C; 
        i++;
    }
    
    //Visualizzazione dati finali
    if(i!=1) {
        printf("Il costo totale della spesa e': %f.", Ct);
        if(Ct>100) {
            Ct = Ct*85/100;
            printf("\nApplicando il 15% di sconto: %f.", Ct);
        }
    } else {
        printf ("I dati inseriti non hanno senso.");
    }
    return 0;
}	//main end