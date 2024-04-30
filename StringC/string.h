#ifndef STRING_H
#define STRING_H

typedef struct {
    char* string;
} String;

String createString();
String toUppercase(String txt);
String toLowercase(String txt);

int qtyCaractere(String text);
String string(const char *input);

String rmCharacter(String txt);
#endif
