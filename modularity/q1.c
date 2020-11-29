//
// Created by gusga on 29/11/2020.
//

//  Fn = Fn-1 + Fn-2
//  The first two terms of the series are 0, 1.
//  For example: fib(0) = 0, fib(1) = 1, fib(2) = 1


#include <stdio.h>
#include <assert.h>

int fibonacci_iteration(int user_input){

    int previous_previous_number = 0;
    int previous_number = 0;
    int current_number = 1;

    for (int i = 1; i < user_input; ++i) {

        previous_previous_number = previous_number;

        previous_number = current_number;

        current_number = previous_previous_number + previous_number;
    }

    return current_number;
}

int fibonacci_recursion(int user_input){

    if (user_input == 0) {
        return 0;
    } else if (user_input == 1){
        return 1;
    }

    // I'm not exactly sure why this works, I used a solution I found online
    return fibonacci_recursion(user_input - 1) + fibonacci_recursion(user_input - 2);
}

int main(){
    setvbuf(stdout, NULL, _IONBF, 0);

    int user_input = 0;

    printf("Enter a number to calculate the Fibonacci sequene with:");
    scanf("%d", &user_input);

    // Question 1.A
    printf("\n %d", fibonacci_iteration(user_input));

    // Question 1.B
    printf("\n %d", fibonacci_recursion(user_input));


}
