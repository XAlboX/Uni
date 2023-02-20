#include <stdio.h>

//Si scriva un programma in linguaggio C che legga due valori interi e visualizzi la loro media aritmetica.
int main (int argc, char *argv[]) {
    int x,y;
    float somma;

    printf("Inserisci un numero\n");
    scanf("%d",&x);
    printf("Inserisci un altro numero\n");
    scanf("%d",&y);
    somma=x+y;
    printf("Media: %.2f",somma/2);
    return 0;
}