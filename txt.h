#include <stdio.h>

#define LINE 256
#define WORD 30

int Getline(char s[]);

int getword(char w[]);

int substring(char * str1, char * str2);

int sizeOfString(char* str);

int similar(const char* s, const char* t, int n);

void print_lines(char *str);

void print_similar_words(char *str);
