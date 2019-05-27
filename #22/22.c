/* [22] */
#include <stdio.h>

void main() {
    /* Dichiarazione variabili */
    int bit, oldBit, iT=0, iF=0, jF=0, jT=0;

    //Lettura primo termine sequenza 
    printf("Inserire termini sequenza singolarmente:\n");
    scanf("%d", &bit);
    //Calcolo sottosequenza
    if(bit==0) { iF++; jF++; }
    else if(bit==1) { iT++; jT++; }
    oldBit = bit;

    /* Lettura sequenza e calcolo sottosequenza*/
    while(bit==0 || bit==1) {
        //Lettura sequenza
        scanf("%d", &bit);
        //Calcolo sottosequenza
        if(bit==0) {
            if(bit!=oldBit) iF=0;
            iF++;
            if(iF>jF) jF=iF;
        } else if(bit==1) {
            if(bit!=oldBit) iT=0;
            iT++;
            if(iT>jT) jT=iT;
        }
        oldBit = bit;
    }
    
    /* Visualizzazione dati finali */
    if(jF>jT) printf("La sottosequenza piu' lunga e' di zero ed e' formata da %d zero.\n", jF);
    else if(jT>jF) printf("La sottosequenza piu' lunga e' di uno ed e' formata da %d uno.\n", jT);
    else printf("Le sottosequenze piu' lunghe si equivalgono e sono lunghe %d cifre.\n", jF);
}