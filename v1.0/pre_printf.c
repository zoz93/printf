#include "main.h"

/**
 * _printf - lowkey function clone to printf
 * @format: the function format we received to print
 * Return: Number of printed chars
 */
int _printf(const char *format, ...)
{
	int y;
	va_list args_list;

	va_start(args_list, format);
	y = AA_spec_printf(format, args_list);
	va_end(args_list);
	return (y);
}
