#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main() {
	
    printf("Digite: ");
    String variavel = criarString();
    printf("\n \nvariavel: Original%s\n", variavel.string);
    
    String variavel1 = criarString();
	variavel1 = minusculo(variavel);
 	printf("\nvariavel em minuscula: %s\n", variavel1.string);
 	
 	String variavel2 = criarString();
 	
	variavel2 = maiusculo(variavel);
 	printf("\nvariavel em maiusculo: %s\n", variavel2.string);

    return 0;
}
