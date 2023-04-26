#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_character(char c);
int print_string(char *str);
int switches(char s, va_list osarg);
#endif
