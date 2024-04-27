#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main() {
    fflush(stdout);
    printf("Digite: ");
    String variavel = criarString();
    printf("\n \n variavel: %s\n", variavel.string);

    return 0;
}
