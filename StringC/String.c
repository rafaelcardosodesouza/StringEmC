#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<stdbool.h>

/* Structure to hold a string */
typedef struct {
    char *string; // Pointer to the character array
} String;

/* Function to create a string */
String createString() {
    int initialSize = 10; // Define o tamanho inicial da string para otimiza��o de mem�ria
    char *string = (char *)malloc(initialSize * sizeof(char)); // Aloca mem�ria inicial para a string

    // Verifica se a aloca��o de mem�ria foi bem-sucedida
    if (string == NULL) {
        printf("Erro ao alocar mem�ria.");
        exit(1); // Termina o programa se a aloca��o de mem�ria falhar
    }

    int index = 0;
    int character;

    // Loop para ler caracteres at� encontrar uma nova linha ou fim de arquivo
    while ((character = getchar()) != '\n' && character != EOF) {
        string[index] = (char)character; // Armazena o caractere na string
        index++;

        // Verifica se mais mem�ria precisa ser realocada para a string
        if (index >= initialSize - 1) {
            initialSize *= 2; // Dobra o tamanho da string para evitar realoca��es frequentes
            string = (char *)realloc(string, initialSize * sizeof(char)); // Realoca mem�ria para a string

            // Verifica se a realoca��o de mem�ria foi bem-sucedida
            if (string == NULL) {
                printf("Erro ao realocar mem�ria.");
                exit(1); // Termina o programa se a realoca��o de mem�ria falhar
            }
        }
    }

    // Se a entrada for vazia, retorna uma string vazia
    if (index == 0) {
        string[index] = '\0'; // Adiciona o caractere nulo ao final da string para indicar sua termina��o
    } else {
        string[index] = '\0'; // Adiciona o caractere nulo ao final da string para indicar sua termina��o
    }

    // Cria uma estrutura String para encapsular a string criada e a retorna
    String wrapper;
    wrapper.string = string; // Atribui a string criada � estrutura String para encapsul�-la
    return wrapper; // Retorna a estrutura String encapsulando a string criada
}

String string(const char *input) {
    String wrapper;
    wrapper.string = strdup(input); // Creates a copy of the input string

    if (wrapper.string == NULL) {
        printf("Error allocating memory.");
        exit(1);
    }
    return wrapper;
}

// Procedure to convert a string to uppercase
String toUppercase(String text) {
    int i = 0;
    String temp;
    while (text.string[i] != '\0') {
        temp.string[i] = toupper(text.string[i]);
        i++;
    }
    temp.string[i] = '\0'; // Character indicating the end of the string
    return temp;
}

// Procedure to convert a string to lowercase
String toLowercase(String text) {
    int i = 0;
    String temp;

    while (text.string[i] != '\0') {
        temp.string[i] = tolower(text.string[i]);
        i++;
    }
    temp.string[i] = '\0'; // Character indicating the end of the string
    return temp;
}

int qtyCaractere(String text){
    int i = 0;
    int j = 0;
    while (text.string[i] != '\0'){
        if(text.string[i] != ' ' && text.string[i] != '\n'){
            j++;
        }
    i++;
    }
    return j;
}

String rmCharacter(String text) {
    String temp; // Vari�vel para armazenar a c�pia da string
    temp.string = strdup(text.string); // Cria uma c�pia da string original

    // Verifica se a aloca��o de mem�ria foi bem-sucedida
    if (temp.string == NULL) {
        printf("Erro ao alocar mem�ria.");
        exit(1); // Termina o programa se a aloca��o de mem�ria falhar
    }

    int i = 0, j = 0;
    while (temp.string[i]) {
        if (isalnum(temp.string[i]) || temp.string[i] == ' ') {
            temp.string[j] = temp.string[i];
            j++;
        }
        i++;
    }
    temp.string[j] = '\0'; // Adiciona o caractere nulo no final da string modificada

    return temp; // Retorna a c�pia da string modificada
}




