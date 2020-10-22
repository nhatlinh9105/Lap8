#include <stdio.h>

void incre()
{
    char var = 65; /* var is automatic variable */
    printf("\nThe character stored in var is %c", var++);
}

main()
{
    incre();
    incre();
    incre();
}
