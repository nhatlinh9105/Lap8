#include<stdio.h>

void incre()
{
    static char var = 65;
    printf("\nThe character stored in var is %c", var++);
}


main()
{
    incre();
    incre();
    incre();
}
