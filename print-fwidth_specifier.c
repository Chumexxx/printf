#include "main.h"
/**
* printwidth - Handles the field width for non-custom conversion specifiers.
* @arguments: input string
* @buf: buffer pointer
* @ibuf: index for buffer pointer
* Return: number of chars printed
*/

int printwidth(va_list arguments, char const *buf, unsigned int ibuf)
{
     buf = "%123s, hello";
     ibuf = 0;
    int width;

while (s[i])
    {
        if(isdigit(buf[i])) {
            char *end;
            width = strtol(&buf[ibuf], &end, 10);
            i = end - s;
        } else {
            i++;
        }
    }
}
