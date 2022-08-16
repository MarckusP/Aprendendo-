#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    int numero[TAM], aux, i, contador;

    printf("\nDigite os numeros do array:");
    for (i = 0; i < TAM; i++){
        scanf("%d", &numero[i]);
    }
    printf("\nOrdem atual dos valores");
    for ( i = 0; i < TAM; i++)
    {
        printf("\n%d", numero[i]);
    }
    //Bubllesort
    for(contador = 1; contador < TAM; contador++){
        for(i = 0; i <= TAM - 1; i++){
            if (numero[i] > numero[i + 1]){
                aux = numero[i];
                numero[i] = numero[i + 1];
                numero[i + 1] = aux;
            }
            
        }
    }
    printf("\nValores apos a ordenacao");
    for(i = 0; i < TAM; i++){
        printf("\n%d", numero[i]);
    }
    





    return 0;
}