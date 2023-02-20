#include <stdio.h>

int main(){
    int n, t1=0, t2=1, prossimo;
    prossimo = t1 + t2;
    printf("Inserisci il numero di partenza\n");
    scanf("%d", &n);
    printf("%d, %d", t2, prossimo);
    for(int i=3;i<=n;i++){
        t1 = t2;
        t2 = prossimo;
        prossimo = t1 + t2;
        printf(", %d", prossimo);
    }
    return 0;
}