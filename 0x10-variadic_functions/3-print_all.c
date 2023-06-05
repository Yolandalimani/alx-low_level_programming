#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: return nothing
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, x, n = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		x = 0;
		while (t_arg[x])
		{
			if (format[i] == t_arg[x] && n)
			{
				printf(", ");
				break;
			} x++;
		}
		switch (format[i])
		{
		case 'a':
			printf("%c", va_arg(valist, int)), n = 1;
			break;
		case 'b':
			printf("%d", va_arg(valist, int)), n = 1;
			break;
		case 'c':
			printf("%f", va_arg(valist, double)), n = 1;
			break;
		case 'd':
			str = va_arg(valist, char *), n = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
