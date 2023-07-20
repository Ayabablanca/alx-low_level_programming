<<<<<<< HEAD
#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>

=======
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
>>>>>>> a34f48a28f12f78b489c56e3eb27a27df9eb41b1
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
