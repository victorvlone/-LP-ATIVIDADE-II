#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int numeroUm, numeroDois, MaiorNumero, MenorNumero;
    
    printf("Digite o 1º número: ");
    scanf("%d", &numeroUm);
    printf("Digite o 2º número: ");
    scanf("%d", &numeroDois);

    if (numeroDois > numeroUm){
        MaiorNumero = numeroDois;
        MenorNumero =numeroUm;
        printf("O número %d é o maior, já o número %d é o menor!", MaiorNumero, MenorNumero);

    } else if (numeroDois == numeroUm){
        printf("Os números são iguais.");

    } else{
        MaiorNumero = numeroUm;
        MenorNumero = numeroDois;
        printf("O número %d é o maior, já o número %d é o menor!", MaiorNumero, MenorNumero);

    }
    
    return 0;
}