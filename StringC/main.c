#include <stdio.h>
#include <locale.h>
#include "string.h"


int main() {
    //printf("Digite algo: ");
    //String teste1 = ;

    String teste2 = rmCharacter(toLowercase(string("@@@AAABBB@@@"))); //

   // printf("String Original -> %s\n", teste1.string); // Imprime a string original
    printf("Caracteres especiais removidos -> %s\n", teste2.string); // Imprime a string modificada

    return 0;
}
