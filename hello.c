#include <stdio.h>

static int t = 1;

int main()
{
    if (t)
        printf("on this line\n");
    else
        printf("but not here\n");
    printf("Tests finished\n");
    printf("second pull\n");
    return 0;
}
