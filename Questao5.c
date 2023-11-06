#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    char idioma[500];
    char PrimeiroIdioma[500] = "ingles";
    char SegundoIdioma[500] = "espanhol";
    char TerceiroIdioma[500] = "frances";
    
    printf("Escolha o idioma de sua preferencia: ");
    gets(idioma);

    if (strcmp(idioma, PrimeiroIdioma) == 0){
        printf("Welcome!\n");
    } else if(strcmp(idioma, SegundoIdioma) == 0){
        printf("Bienvenido!\n");
    } else if(strcmp (idioma, TerceiroIdioma) == 0){
        printf("accueillir!\n");
    }

    return 0;
}