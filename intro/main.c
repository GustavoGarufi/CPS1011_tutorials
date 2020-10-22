# include <stdio.h>
# include "main.h"

int main(void)
{
    my_addition();

}

void my_addition(void)
{
    int x = 14;

    int y = 7;

    int z = x + y;

    printf("the total between %d and %d is %d.\n", x, y, z);

}