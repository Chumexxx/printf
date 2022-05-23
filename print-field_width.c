#include "main.h"
#include "stdio.h"

/**
* field-width - concatenates the buffer characters
* @arguments: input address.
* @buf: buffer pointer.
* @width: width of space.
* Return: formatted width space.
*/

int field_width(va_list arguments, char *buf, unsigned int width)
{
char *ibuf;
char *str;
if (strlen(ibuf) <= width)
{
ibuf = (char*)malloc(width);
str = ' ' * (width - strlen(buf));
strcpy(ibuf, str);
strcat(ibuf, buf);
}
else
{
ibuf = (char*)malloc(strlen(buf));
strcpy(ibuf, buf);
}
return (itoa(ibuf));
}
