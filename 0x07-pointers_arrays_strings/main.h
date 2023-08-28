#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
void set_string(char **s, char *to);

#endif
