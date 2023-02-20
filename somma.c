#include <stdio.h>

//Si scriva un programma in linguaggio C che legga due valori interi e visualizzi la loro somma.
int main (int argc, char *argv[]) {
    int x,y;
    printf("Inserisci un numero\n");
    scanf("%d",&x);
    printf("Inserisci un altro numero\n");
    scanf("%d",&y);
    printf("Somma: %d",x+y);
    return 0;
}