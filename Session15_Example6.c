#include <stdio.h>

int swap(int u, int v)
{
    int temp;
    temp = u;
    u = v;
    v = temp;
    return temp;
}

main()
{
    int x, y;
    x = 15; y = 20;
    printf("x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("\nAfter interchanging x = %d, y = %d\n", x, y);
}

