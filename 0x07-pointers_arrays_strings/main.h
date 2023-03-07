#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *cap_string(char *n);
char *_strncpy(char *dest, char *src, int n);
char *rot13(char *s);
void print_number(int n);
void set_string(char **s, char *to);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
void print_chessboard(char (*a)[8]);

#endif
