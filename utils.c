#include "main.h"

/**
 * is_printable - A unction that evaluates i a char is printable
 * @c: char to be evaluated
 * Return: 1 i c is printable, otherwise 0
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
	return (1);
	return (0);
}

/**
 * append_hexa_code - To append ascii in hexadecimal code to buffer
 * @buffer: an array of chars
 * @i: index to start appending
 * @ascii_code: ASCII CODE
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
	ascii_code *= -1;
	buffer[i++] = '\\';
	buffer[i++] = 'x';
	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];
	return (3);
}

/**
 * is_digit - A function that verifies if a char is a digit
 * @c: char to be evaluated
 * Return: 1 if c is a digit. otherwise 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}

/**
 * convert_size_number - A function that casts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 * Return: casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
	return (num);
	else if (size == S_SHORT)
	return ((short)num);
	return ((int)num);
}

/**
 * convert_size_unsgnd - A function tht casts a number to the specified size
 * @num: a number to be casted
 * @size: a number indicating the type to be casted
 * Return: the casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
	return (num);
	else if (size == S_LONG)
	return ((unsigned short)num);
	return ((unsigned int)num);
}
