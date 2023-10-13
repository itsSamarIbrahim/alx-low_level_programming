#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: a pointer to the string of data format types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *string;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
