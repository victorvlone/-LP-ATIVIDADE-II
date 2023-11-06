#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int i = 1;
    int numero;
    int contagemPar = 0;
    int contagemImpar = 0;
    int somaPar = 0;
    int somaImpar = 0;
    
    printf("Digite o %dº numero: ", i);
    scanf("%d", &numero);

    while (numero > 0){
        if (numero % 2 == 0){
            contagemPar++;
            somaPar += numero;
        } else{
            contagemImpar++;
            somaImpar += numero;
        }
        
        i++;
        printf("Digite o %dº numero: ", i);
        scanf("%d", &numero);
    }

    float media = (float) (somaImpar + somaPar) / (i - 1);
    printf("\nMédia total dos números digitados: %.2f\n", media);
    printf("Quantidade de números pares: %d\n", contagemPar);
    printf("Quantidade de números impares: %d\n", contagemImpar);
    float mediaPar = somaPar / contagemPar;
    printf("Média de números pares: %.2f\n", mediaPar);
    float mediaImpar = somaImpar / contagemImpar;
    printf("Média de númmeros impares: %.2f\n", mediaImpar);

    return 0;
}