#include <stdio.h>

static int t = 1;

extern void test1();

int main()
{
    if (t)
        printf("on this line\n");
    else
        printf("but not here\n");

    test1();

    return 0;
}
