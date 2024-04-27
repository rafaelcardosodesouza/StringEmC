# String Wrapper em C

Este é um exemplo de código em C que demonstra como criar uma função para ler uma string do usuário e encapsular essa string em uma estrutura chamada "String Wrapper". Além disso, o código também inclui a lógica para liberar automaticamente a memória alocada para a string quando a variável que armazena a string sair de escopo.

## Funcionamento

1. O código define uma estrutura chamada `String` que contém um ponteiro para uma string.

2. A função `criarString()` é responsável por ler uma linha de texto digitada pelo usuário e armazená-la dinamicamente em uma string.

3. Dentro da função `criarString()`, a memória é alocada dinamicamente usando a função `malloc()`. Se houver erro na alocação de memória, o programa é encerrado com uma mensagem de erro.

4. A função `getchar()` é usada para ler os caracteres digitados pelo usuário até encontrar uma quebra de linha (`'\n'`), indicando o final da entrada.

5. Se a string digitada pelo usuário exceder o tamanho inicial alocado, mais memória é alocada dinamicamente usando a função `realloc()`.

6. Após ler toda a linha de texto, um caractere nulo (`'\0'`) é adicionado ao final da string para indicar o fim da mesma.

7. A string lida é então encapsulada em uma instância da estrutura `String` e retornada pela função `criarString()`.

8. Na função `main()`, a função `criarString()` é chamada para criar e ler uma string do usuário. A string encapsulada é então impressa na tela.

9. Como a memória alocada para a string é liberada automaticamente quando a variável que a armazena sai de escopo, não é necessário chamar explicitamente a função `free()` para liberar a memória.


## Observações

- Certifique-se de digitar uma string que não exceda o tamanho máximo permitido pela função `malloc()` para evitar erros de alocação de memória.

- Este código é fornecido apenas como exemplo educacional e pode ser modificado e expandido conforme necessário.
