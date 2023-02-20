#include <stdio.h>

//Scrivere una funzione che, dato un array di N interi, ne calcoli il massimo

int findMax(int v[],int dim){
    int max = v[0];
    for(int i=0;i<dim;i++){
        if(max < v[i]){
            max = v[i];
        }
    }
    return max;
}

int main () {
    const int dim = 5;
    int max;
    int v[] = {1,2,3,4};
    max = findMax(v,dim);
    printf("%d",max);
}