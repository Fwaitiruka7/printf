#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * _printf - processes stdout
 * @format: c for char, s for pointer
 * Return: count
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int list;

	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = (int) va_arg(ap, int);

				putchar(c);
				list++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(ap, char *);

				fputs(s, stdout);
				list += strlen(s);
			}
			else if (*format == 'd' || *format == 'i')
			{
				int int_vl = va_arg(ap, int);
				printf("%d", int_vl);
				list += snprintf(NULL, 0, "%d", int_vl);
			}
			else if (*format == '%')
			{
				putchar('%');
				list++;
			}
		}
		else
		{
			putchar(*format);
			list++;
		}
		format++;
	}
	va_end(ap);
	return (list);
}
