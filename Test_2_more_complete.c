#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("Unsigned:[%u]\n", ui);
    len2 = printf("Unsigned:[%u]\n", ui);
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("Unsigned octal:[%o]\n", ui);
    len2 =printf("Unsigned octal:[%o]\n", ui);
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("%c", '\0');
    _printf("\n");
    len2 = printf("%c", '\0');
    printf("\n");
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("Address:[%p]\n", addr);
    len2 = printf("Address:[%p]\n", addr);
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("Unknown:[%r]\n");
    len2 = printf("Unknown:[%r]\n");
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
    len = _printf("%d", INT_MIN);
	len2 = printf("%d", INT_MIN);
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
    len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
    len = _printf("%i", INT_MIN);
	len2 = printf("%i", INT_MIN);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
    len = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
    len = _printf("%b\n", -1024);
    printf("%b\n", -1024);
	len2 = printf("11111111111111111111110000000000");
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
    return (0);
}
