#include <stdio.h>

int main(){
    int x, fattoriale=1;
    printf("Inserisci il fattoriale\n");
    scanf("%d", &x);
    if(x<=0){
        printf("Il numero non è positivo\n");
    }else{
        while(x>0){
            fattoriale = fattoriale * x;
            x--;
        }
        printf("%d\n", fattoriale);
    }
}