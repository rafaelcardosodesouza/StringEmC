#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <ctype.h>


// Função para criar uma string dinâmica
String criarString() {
    int tamanhoInicial = 10; // Define o tamanho inicial da string para otimização de memória
    char* string = (char*)malloc(tamanhoInicial * sizeof(char)); // Aloca memória inicial para a string

    // Verifica se a alocação de memória foi bem-sucedida
    if (string == NULL) {
        printf("Erro ao alocar memória.");
        exit(1); // Encerra o programa se a alocação de memória falhar
    }

    char caractere;
    int indice = 0;

    // Loop para ler caracteres até encontrar uma quebra de linha
    while ((caractere = getchar()) != '\n') {
        // Verifica se é necessário realocar mais memória para a string
        if (indice >= tamanhoInicial - 1) {
            tamanhoInicial *= 2; // Dobra o tamanho da string para evitar realocações frequentes
            string = (char*)realloc(string, tamanhoInicial * sizeof(char)); // Realoca memória para a string

            // Verifica se a realocação de memória foi bem-sucedida
            if (string == NULL) {
                printf("Erro ao realocar memória.");
                exit(1); // Encerra o programa se a realocação de memória falhar
            }
        }

        string[indice] = caractere; // Armazena o caractere na string
        indice++;
    }

    string[indice] = '\0'; // Adiciona o caractere nulo ao final da string para indicar o término da mesma

    // Cria uma estrutura String para encapsular a string criada e a retorna
    String wrapper;
    wrapper.string = string; // Atribui a string criada à estrutura String para encapsulá-la
    return wrapper; // Retorna a estrutura String encapsulando a string criada
}



// procedimento que converte uma string para maiúsculo
String maiusculo(String text){
    int i = 0;
    String s2;
    while(text.string[i] != '\0'){
        s2.string[i] = toupper(text.string[i]);
        i++;
    }
    s2.string[i]= '\0'; // caracteer que indica o fim da string
    return s2;
}

// procedimento que converte uma string para minúsculo
String minusculo(String text){
    int i = 0;
    String s2;

    while(text.string[i] != '\0'){
        s2.string[i] = tolower(text.string[i]);
        i++;
    }
    s2.string[i] = '\0'; // caracteer que indica o fim da string
    return s2;

}

