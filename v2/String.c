#include <stdio.h>
#include <stdlib.h>
#include "string.h"

String criarString() {
    int tamanhoInicial = 10;
    char* string = (char*)malloc(tamanhoInicial * sizeof(char));
    if (string == NULL) {
        printf("Erro ao alocar memória.");
        exit(1);
    }

    char caractere;
    int indice = 0;

    while ((caractere = getchar()) != '\n') {
        if (indice >= tamanhoInicial - 1) {
            tamanhoInicial *= 2;
            string = (char*)realloc(string, tamanhoInicial * sizeof(char));
            if (string == NULL) {
                printf("Erro ao realocar memória.");
                exit(1);
            }
        }

        string[indice] = caractere;
        indice++;
    }

    string[indice] = '\0';

    String wrapper;
    wrapper.string = string;
    return wrapper;
}
