/*Liste sequenziali
Realizzare la stessa lista dell'esercizio 1 con
un'implementazione di tipo sequenziale*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

typedef struct{
    char nome[30];
    char cognome[30];
    int matricola;
} studente;

typedef struct{
    studente array[N];
    int primo, lungh;
} lista;

//Funzione per l'inizializzazione della lista
lista *inizializza(){
    lista *l = NULL;
    l = (lista *)malloc(sizeof(lista));
    l->primo = 0;
    l->lungh = 0;
    return l;
}
//Funzione per l'inserimento ordinato degli studenti in lista
lista* inserisci(lista * l, studente p){
    int i = 0, j;
    if (l->lungh >= N){
        printf("non è possibile inserire nuovi elementi in lista");
    }
    else{
        while (i < l->lungh && l->array[l->primo + i].matricola < p.matricola)
            i++;
        j = l->lungh;
        while (j >= i)
        {
            strcpy(l->array[l->primo + j].nome, l->array[l->primo + j - 1].nome);
            strcpy(l->array[l->primo + j].cognome, l->array[l->primo + j - 1].cognome);
            l->array[l->primo + j].matricola = l->array[l->primo + j - 1].matricola;
            j = j - 1;
        }
        strcpy(l->array[l->primo + i].nome, p.nome);
        strcpy(l->array[l->primo + i].cognome, p.cognome);
        l->array[l->primo + i].matricola = p.matricola;
        l->lungh++;
    }
    return l;
}

int main(){
    char scelta;
    studente p;
    lista *l = NULL;
    l = inizializza();
    printf("vuole inserire uno studente in lista? (y/n)\n");
    scanf("%c", &scelta);
    while (scelta == 'y'){
        printf("nome\t");
        scanf("%s", p.nome);
        printf("cognome\t");
        scanf("%s", p.cognome);
        printf("matricola\t");
        scanf("%d", &(p.matricola));
        l = inserisci(l, p);
        printf("vuole inserire un altro studente in lista? (y/n)\n");
        fflush(stdin);
        scanf("%c", &scelta);
    }
    return 0;
}