#include "main.h"
#include <stdio.h>
/**
* print_address - prints the address of an input variable
* @arguments: input address.
* @buff: buffer pointer.
* @ibuf: index for buffer pointer
*
* Return: number of chars printed.
*/
int print_add(va_list arguments, char *buff, unsigned int echo)
{
void *add;
long int int_input;
int i, count, first_digit, inpvar;
char *hexadecimal, *binary;
char nill[] = "(nil)";

add = (va_arg(arguments, void *));
if (add == NULL)
{
for (i = 0; nill[i]; i++)
echo = handl_buf(buff, nill[i], echo);
return (5);
}
int_input = (intptr_t)add;
inpvar = 0;
if (int_input < 0)
{
int_input = (int_input * -1) - 1;
inpvar = 1;
}
binary = malloc(sizeof(char) * (64 + 1));
binary = fill_binary_array(binary, int_input, inpvar, 64);
hexadecimal = malloc(sizeof(char) * (16 + 1));
hexadecimal = fill_hex_array(binary, hexadecimal, 0, 16);
echo = handl_buf(buff, '0', echo);
echo = handl_buf(buff, 'x', echo);
for (first_digit = i = count = 0; hexadecimal[i]; i++)
{
if (hexadecimal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
echo = handl_buf(buff, hexadecimal[i], echo);
count++;
}
}
free(binary);
free(hexadecimal);
return (count + 2);
}
