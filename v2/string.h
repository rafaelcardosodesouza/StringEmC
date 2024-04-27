#ifndef STRING_H
#define STRING_H

typedef struct {
    char* string;
} String;

String criarString();
String maiusculo(String txt);
String minusculo(String txt);

#endif
