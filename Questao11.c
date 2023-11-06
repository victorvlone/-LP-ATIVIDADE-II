#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int CodigoInserido;
    
    printf("Digite o código de acesso: ");
    scanf("%d", &CodigoInserido);

    while (CodigoInserido != 20222023){
        system("cls || clear");
        printf("Código invalido! Tente Novamente: ");
        scanf("%d", &CodigoInserido);
    }

    system("cls || clear");
    printf("Acesso permitido.\n");
    printf("   Bem-vindo!\n");

    return 0;
}