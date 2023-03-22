#ifndef fun_h
#define fun_h
#include <stddef.h>
int _putchar(char s);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
void print_name_uppercase(char *name);
void print_name_as_is(char *name);

#endif
