#include <stdio.h>
#include <stdlib.h>

// Definindo uma estrutura para armazenar a string
typedef struct {
    char* string; // Ponteiro para a string
} String;

// Função para criar e ler uma string do usuário
String criarString() {
    int tamanhoInicial = 10; // Tamanho inicial da string
    char* string = (char*)malloc(tamanhoInicial * sizeof(char)); // Aloca memória inicial para a string
    if (string == NULL) { // Verifica se houve erro na alocação de memória
        printf("Erro ao alocar memória.");
        exit(1); // Encerra o programa se houver erro na alocação de memória
    }

    char caractere;
    int indice = 0;

    // Loop para ler caracteres até encontrar uma quebra de linha, aqui significa que foi dado um enter
    while ((caractere = getchar()) != '\n') {
        // Verifica se é necessário realocar mais memória
        if (indice >= tamanhoInicial - 1) {
            tamanhoInicial *= 2; // Dobra o tamanho da memória alocada
            string = (char*)realloc(string, tamanhoInicial * sizeof(char)); // Realoca mais memória para a string
            if (string == NULL) { // Verifica se houve erro na realocação de memória
                printf("Erro ao realocar memória.");
                exit(1); // Encerra o programa se houver erro na realocação de memória
            }
        }

        string[indice] = caractere; // Armazena o caractere na string
        indice++;
    }

    string[indice] = '\0'; // Adiciona o caractere nulo ao final da string para indicar o fim

    // Cria uma instância da estrutura String e atribui a string a ela
    String wrapper;
    wrapper.string = string;
    return wrapper; // Retorna a estrutura String contendo a string lida
}

int main() {
    printf("Digite: ");
    // Chama a função criarString() para criar e ler uma string do usuário
    String variavel = criarString();

    // Imprime a string lida
    printf("\n \n variavel: %s\n", variavel.string);

    // Como a memória alocada para a string será liberada automaticamente quando 'variavel' sair de escopo, não é necessário chamada a função free() aqui.

    return 0;
}
