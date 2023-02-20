#include <stdio.h>

//Si scriva un programma in linguaggio C che legga un valore intero e visualizzi il valore intero precedente e il successivo.
int main (int argc, char *argv[]) {
    int x;
    printf("Inserisci un numero\n");
    scanf("%d",&x);
    printf("Valore precedente e successivo al numero inserito in input: %d %d", x-1,x+1);
    return 0;
}