#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);

/* STRUCT */
/**
 * struct specifier - struct
 * @find: variable that finds a match
 * @func: function that variables call
 * Return: none
 **/
typedef struct specifier
{
        char find;
        int (*func)(va_list);
} specifier;


int print_percent(va_list list);
int print_string(va_list list);
int print_char(va_list list);
int print_integer(va_list list);
int _printf(const char *format, ...);

int print_reverse(va_list list);
int print_rot13(va_list list);

#endif
