#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct data - Data structure to map format specifiers to functions
 * @ch: The format specifier
 * @f: A pointer to the corresponding function
 */
typedef struct data
{
const char *ch;
void (*f)(va_list ptlist);
} data;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
