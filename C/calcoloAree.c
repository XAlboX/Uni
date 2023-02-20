#include <stdio.h>
#include <math.h>
/*
Si scriva un programma in linguaggio C che, dato un numero reale D immesso da tastiera, calcoli e stampi:
1. l’area del quadrato di lato D
2. l’area del cerchio di diametro D
3. l’area del triangolo equilatero di lato D
*/
int main (int argc, char *argv[]) {
    float x,areaQ,areaC,areaT;
    printf("Inserisci il valore del lato\n");
    scanf("%f",&x);
    areaQ=x*x;
    areaC=x*M_PI;
    areaT=sqrt(3)/4*pow(x,2);
    printf("Area Quadrato: %.2f\nArea Cerchio: %.2f\nArea Triangolo Equilatero: %.2f",areaQ,areaC,areaT);
    return 0;
}