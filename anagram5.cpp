#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap (char *x, char *y)
{
    char ch = *x;
    *x = *y;
    *y = ch;
};

void permutate_(char* str, size_t index )
{
    size_t i = 0;
    size_t slen = strlen(str);
    char lastChar = 0;

    if (index == slen )
    {
        puts(str);
        return;
    }

    for (i = index; i < slen; i++ )
    {
        if (lastChar == str[i])
            continue;
        else
            lastChar = str[i];

        swap(str+index, str+i);
        permutate_(str, index + 1);
        swap(str+index, str+i);
    }
}

// pretty lame, but effective, comparitor for determining winner
static int cmpch(const void * a, const void * b)
{
    return ( *(char*)a - *(char*)b );
}

// loader for real permutor
void permutate(char* str)
{
    qsort(str, strlen(str), sizeof(str[0]), cmpch);
    permutate_(str, 0);
}
