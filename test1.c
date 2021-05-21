#include <stdio.h>

static int t = 1;

void test1()
{
    if (t)
        printf("on this line (test1)\n");
    else
        printf("but not here (test1)\n");
}
