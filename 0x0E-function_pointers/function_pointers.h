#ifndef PRINT_NAME
#define PRINT_NAME
#define size_t int
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
