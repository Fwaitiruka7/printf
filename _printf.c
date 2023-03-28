#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * _printf - processes stdout
 * @format: c for char, s for pointer
 * Return: 0 if successful
 */

int _printf(const char *format, ...)
{
	va_list(ap);
	int no = 0;
	char *s, c;

	va_start(ap, format);

	for (; no != '\0'; no++)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = (char) va_arg(ap, int);
					putchar(c);
					break;
				case 's':
					s = va_arg(ap, char *);
					putchar(*s);
					no++;
					s++;
					break;
				case '%':
					putchar('%');
					no++;
				default:
					break;
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(ap);
	return (0);
}
