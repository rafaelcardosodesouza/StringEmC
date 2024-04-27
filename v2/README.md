# Documentação do Projeto String em C

Este projeto consiste em criar uma função em C para criar e manipular strings dinâmicas.

## Arquivos do Projeto:

1. **String.c**: Este arquivo contém a implementação da função `criarString()`.

2. **main.c**: Este é o arquivo principal do programa, onde a função `criarString()` é utilizada para criar uma string dinâmica e imprimir seu conteúdo.

3. **string.h**: Este arquivo de cabeçalho contém a definição da estrutura `String` e o protótipo da função `criarString()`.

## Documentação Detalhada:

### 1. String.c

- **Função `criarString()`:**
  - Descrição: Esta função é responsável por criar uma string dinâmica, alocando memória conforme o usuário insere caracteres pelo teclado até pressionar Enter.
  - Parâmetros: Nenhum.
  - Retorno: Retorna uma estrutura do tipo `String` contendo a string dinâmica criada.
  - Comportamento: A função aloca inicialmente uma quantidade fixa de memória para a string e, conforme o usuário insere caracteres, verifica se a quantidade de memória alocada é suficiente. Se não for, realoca mais memória para acomodar a string. Ao final, a função retorna a string dinâmica.

### 2. main.c

- **Função `main()`:**
  - Descrição: Função principal do programa.
  - Comportamento: No `main()`, a função `criarString()` é chamada para criar uma string dinâmica. Em seguida, o conteúdo da string é impresso na tela.

### 3. string.h

- **Estrutura `String`:**
  - Descrição: Uma estrutura que contém um ponteiro para uma string.
  - Uso: A estrutura `String` é utilizada para representar uma string dinâmica.

- **Protótipo da Função `criarString()`:**
  - Descrição: Protótipo da função `criarString()`.
  - Uso: O protótipo da função `criarString()` permite que outros arquivos fonte saibam sobre a existência dessa função e a utilizem em seus programas.


