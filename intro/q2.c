# include <stdio.h>
# include "q2.h"

int main(void)
{

    setvbuf(stdout, NULL, _IONBF, 0);

    // initializing variables
    int x = 0;
    int y = 0;

    // storing the first number

    printf("Enter the first number : ");

    scanf("%d", &x);


    // storing the second number

    printf("Enter the second number : ");

    scanf("%d", &y);

    int result = my_addition(x,y);

    int result_2 = my_multiplication(x,y);

    int result_3 = my_subtraction(x,y);

    printf("the total between %d and %d is %d.\n", x, y, result);
    printf("the multiplication between %d and %d is %d.\n", x, y, result_2);
    printf("the subtraction of %d and %d is %d.\n", x, y, result_3);


}
