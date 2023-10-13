#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @formant: a pointer to the string of data format types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char *string;
	va_start(args, format);

	while (*ptr != '\0')
	{
		switch (*ptr)
		{
			case 'c': printf("%c", va_arg(args, int));
				  break;
			case 'i': printf("%d", va_arg(args, int));
				  break;
			case 'f': printf("%f", va_arg(args, double));
				  break;
			case 's': string = va_arg(args, char *);
				  if(string != NULL)
					  printf("%s", string);
				  else
					  printf("(nil)");
				  break;
			default: ptr++;
				 continue;
		}
		ptr++;
		if (*ptr != '\0')
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
