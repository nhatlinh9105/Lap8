#include <stdio.h>

squarer(int x)
{
    int j;
    j = x * x;
    return(j);
    
}

main()
{
    for(int i=1; i<=10; i++)
    printf("\nSquare of %d is %d", i, squarer(i));
}
