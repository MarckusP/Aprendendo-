#include <stdio.h>
#include <locale.h>
 
int main () 
{
    setlocale (LC_ALL, "Portuguese_Brazilian");
 
//Reconhecendo os tipos de variáveis 
//Uso da variável menor e maior para criar solução lógica 
    int N1, N2, N3, N4, N5, maior, menor;
 
//Lendo o valor das variáveis 
    printf("Escreva o valor de N1 abaixo.\n");
    scanf("%d", &N1);
    printf("Escreva o valor de N2 abaixo.\n");
    scanf("%d", &N2);
    printf("Escreva o valor de N3 abaixo.\n");
    scanf("%d", &N3);
    printf("Escreva o valor de N4 abaixo.\n");
    scanf("%d", &N4);
    printf("Escreva o valor de N5 abaixo.\n");
    scanf("%d", &N5);
 
    menor = N1;
 
//Usando tomada de decisão Sequencial 
    if (N2 < menor)
    {
        menor = N2;
    }
    if (N3 < menor)
    {
        menor = N3;
    }
    if (N4 < menor)
    {
        menor = N4;
    } 
    if (N5 < menor)
    {
        menor = N5;
    }
    
 
//Usando tomada de decisão Sequencial 
 
    maior = 0;
 
    if (N1 > maior)
    {
        maior = N1;
    }
    if (N2 > maior)
    {
        maior = N2;
    }
    if (N3 > maior)
    {
        maior = N3;
    }
    if (N4 > maior)
    {
        maior = N4;
    } 
    if (N5 > maior)
    {
        maior > N5;
    }
    
    
// criando possível situação onde todos podem ser iguais
 if (N1 == N2)
 {
     if (N2 == N3)
     {
        if (N3 == N4)
        {
            if (N4 == N5)
            {
                printf("Todos os valores são iguais.");
            }
            
        }
        
     }
     
 }
 //Apresentando resultado se somente se não forem todos iguais 
 else
 {
    printf("O menor valor entre os números digitados é: %d. \nE o maior Entre os números digitados é: %d.", menor, maior);
 }
 
 
    return 0;
}
