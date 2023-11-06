 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 int main () {

    setlocale(LC_ALL, "portuguese");

    int opcao;

    printf("1. NOVO JOGO\n");
    printf("2. CARREGAR JOGO\n");
    printf("3. CONFIGURAÇÕES\n\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    system("cls || clear");

    switch (opcao){

    case 1:
        printf("Que comece o jogo...");
        break;

    case 2: 
        printf("Esse foi o ultimo ponto que você parou...");
        break;

    case 3:
        printf("BRILHO\n");
        printf("SOM\n");
        printf("CONTROLES\n");
        printf("IDIOMA\n");

    default:
        printf("Opção não disponivel");
        break;
    }

    return 0;
 }