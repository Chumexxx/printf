#include "main.h"
/**
* fill_hex_array - prints decimal in hexadecimal
*
* @binary: array where is stored the binary.
* @hex: array where is stored the hexadecimal.
* @upphex: integer that determines if the hexadecimal array is
* in uppercase or lowercase letter.
* @limit: size of hex
* Return: binary array.
*/
char *fill_hex_array(char *binary, char *hex, int upphex, int limit)
{
int echo, i, j, inpvar;

hex[limit] = '\0';
if (upphex)
inpvar = 55;
else
inpvar = 87;
for (i = (limit * 4) - 1; i >= 0; i--)
{
for (echo = 0, j = 1; j <= 8; j *= 2, i--)
echo = ((binary[i] - '0') * j) + echo;
i++;
if (echo < 10)
hex[i / 4] = echo + 48;
else
hex[i / 4] = echo + inpvar;
}
return (hex);
}
