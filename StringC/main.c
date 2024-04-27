#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main() {

    printf("Enter: ");
    String variable = createString();

    printf("\nOriginal variable: %s\n", variable.string);

    String variable1 = createString();
    variable1 = toLowercase(variable);
    printf("\nVariable in lowercase: %s\n", variable1.string);

    String variable2 = createString();
    variable2 = toUppercase(variable);
    printf("\nVariable in uppercase: %s\n", variable2.string);

    return 0;
}
