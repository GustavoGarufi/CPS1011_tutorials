//
// Created by gusga on 08/11/2020.
//

#include <stdio.h>

int main() {

    setvbuf(stdout, NULL, _IONBF, 0);

    int user_number = 0;

    printf("Please enter a number greater then 0 to calculate the factorial of:\n");

    scanf("%d", &user_number);

    // checks to see if number is greater then zero

    if(user_number > 0) {
        //once the loop is initialize I make my variables
        int i = 1;

        int sum = 1;

        //here I loop through each number and keep adding 1 until I reach the value the user input
        for(i=1; i<=user_number; i++){
            //I use the value of sum, to multiply with the value added by each iteration.
            sum=sum*i;
        }
        //give the final result outside the loop
        printf("The factorial number of %d is: %d\n", user_number, sum);

    }

    //if not greater then zero, kill the program
    else {
        printf("The number is less then 0");
    }
}