#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{
    int l = 0; /* length counter */

    for (l = 0; s[l] != '\0'; l++);

    return l;
}
