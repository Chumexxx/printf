#include "main.h"

 long my_strtol(char *p, char **end)
 {
    long rv = 0;
    while (isdigit(*p)) {
        rv = rv * 10 + *p - '0';
        ++p; }
    *end = p;
    return rv;
}
