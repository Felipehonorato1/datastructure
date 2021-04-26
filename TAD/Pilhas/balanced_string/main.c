#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <string.h>

int main()
{
    char a[] = "{[)()(]}";
    printf("Is this string balanced? %d\n ", check_balanced(a));
    return 0;
}