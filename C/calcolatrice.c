#include <stdio.h>
/*
scriva un programma in linguaggio C capace di compiere le 4 operazioni (addizione, sottrazione, moltiplicazione e divisione) tra due numeri reali
inseriti da tastiera. Dopo che sono stati inseriti i due numeri, detti A e B, il programma dovrà visualizzare i quattro valori A+B, A-B, A*B, A/B.
Si ipotizzi che sia B!=0.
*/
int main (int argc, char *argv[]) {
    float x,y,somma,differenza,prodotto,quoziente;

    printf("Inserisci un numero\n");
    scanf("%f",&x);
    printf("Inserisci un altro numero\n");
    scanf("%f",&y);
    somma = x+y;
    differenza = x-y;
    prodotto = x*y;
    quoziente = x/y;
    printf("Somma: %.2f Differenza: %.2f Prodotto: %.2f Quoziente: %.2f",somma,differenza,prodotto,quoziente);

    return 0;
}