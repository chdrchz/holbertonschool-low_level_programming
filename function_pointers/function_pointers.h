#ifndef MAIN
#define MAIN

size_t;
int _putchar(char c);
void (*f)(char *);
int _strlen(char *s);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
