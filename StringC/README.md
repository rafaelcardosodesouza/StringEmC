# Biblioteca de Manipulação de Strings em C

Esta biblioteca fornece funções para manipulação de strings em C. Abaixo estão as funções disponíveis juntamente com uma explicação detalhada de cada uma e exemplos de uso.

## Funções Disponíveis:

### 1. `String createString();`

#### Propósito:
Esta função permite ao usuário criar uma nova string digitando-a a partir do teclado.

#### Funcionamento Interno:
1. Inicializa uma string vazia com um tamanho inicial de 10 caracteres.
2. Lê caracteres da entrada padrão (teclado) até encontrar uma nova linha ou o final do arquivo (EOF).
3. Armazena os caracteres lidos na string, realocando memória conforme necessário para acomodar mais caracteres.
4. Retorna a string criada encapsulada na estrutura `String`.

#### Exemplo de Uso:

```
String str = createString();
```

### 2. `String string(const char *input);`
### Propósito:
Esta função cria uma nova string a partir de uma string constante fornecida como entrada.


### Funcionamento Interno:
1. Aloca dinamicamente memória para armazenar a cópia da string constante fornecida como entrada.
2. Retorna a string criada encapsulada na estrutura String.

### Exemplo de Uso:
```
String str = string("Exemplo de string constante");
```

### 3. `String toUppercase(String txt);`
### Propósito:
Esta função converte todos os caracteres de uma string para letras maiúsculas.

### Funcionamento Interno:
1. Percorre cada caractere da string original.
2. Utiliza a função toupper() para converter cada caractere para maiúscula.
3. Armazena os caracteres convertidos em uma nova string.
4. Retorna a nova string com todos os caracteres em maiúsculas.

### Exemplo de Uso:
```
String uppercaseStr = toUppercase(str);
```

### 4. `String toLowercase(String txt);`
### Propósito:
Esta função converte todos os caracteres de uma string para letras minúsculas.

### Funcionamento Interno:
1. Percorre cada caractere da string original.
2. Utiliza a função tolower() para converter cada caractere para minúscula.
3. Armazena os caracteres convertidos em uma nova string.
4. Retorna a nova string com todos os caracteres em minúsculas.

### Exemplo de Uso:
```
String lowercaseStr = toLowercase(str);
```

### 5. `int qtyCaractere(String text);`
### Propósito:
Esta função conta o número de caracteres em uma string, excluindo espaços em branco e quebras de linha.

1. Funcionamento Interno:
2. Percorre cada caractere da string.
Incrementa um contador para cada caractere que não seja um espaço em branco ou uma quebra de linha.
3. Retorna o número total de caracteres contados.

### Exemplo de Uso:

```
int count = qtyCaractere(str);
```
### 6. `String rmCharacter(String txt);`
### Propósito:
Esta função remove caracteres especiais de uma string, mantendo apenas letras e espaços.

### Funcionamento Interno:
1. Cria uma cópia da string original para realizar a modificação.
2. Percorre cada caractere da cópia da string.
3. Verifica se cada caractere é alfanumérico ou um espaço em branco.
4. Armazena apenas os caracteres válidos em uma nova string.
5. Retorna a nova string sem os caracteres especiais.

### Exemplo de Uso:
```
String cleanedStr = rmCharacter(str);
```
## Passagem de Função como Argumento
Em C, é possível passar o resultado de uma função como argumento para outra função dentro da biblioteca. Isso é especialmente útil para encadear operações de maneira mais concisa e expressiva.

### Exemplo de Uso:
Suponha que você tenha uma função **toLowercase()** que converte uma string para letras minúsculas, e outra função **rmCharacter()** que remove caracteres especiais de uma string. Você pode combinar essas duas operações da seguinte forma:

```
String cleanedStr = rmCharacter(toLowercase(string("@@@AAABBB@@@")));
printf("Caracteres especiais removidos -> %s\n", cleanedStr.string);
```

Neste exemplo, uma string contendo caracteres especiais é convertida para minúsculas pela função **toLowercase()**, e então passada para a função **rmCharacter()** para remover os caracteres especiais. A nova string resultante é então impressa.
