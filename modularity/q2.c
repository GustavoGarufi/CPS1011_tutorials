//
// Created by gusga on 29/11/2020.
//

// I guided myself with https://overiq.com/c-examples/c-program-to-convert-a-decimal-number-to-a-hexadecimal-number/#:~:text=To%20convert%20a%20decimal%20number%20to%20a%20hexadecimal%20number%2C%20we,we%20get%20the%20quotient%200.&text=Step%203%3A%20Write%20the%20remainders%20from%20bottom%20to%20top.
// to understand how hexadecimal conversion works

#include <stdio.h>

void base10_to_hexadecimal(int user_input){

    //calling variables
    int result = 0;

    //if it's null, before starting or after being divided, don't run
    if(!user_input)
        return;


    else{
        // continuously divides by 16 and take the remainder of right most digit into our result variable
        result = user_input%16;

        // reruns the function and once it loops, see's if the function is null on the top if
        base10_to_hexadecimal(user_input/16);
    }

    // checks if the remainder is greater then 10 to convert to correct letter / string
    if (result>9)
        printf("%c", 'A' + (result-10));

    // if it's less, do nothing, just put the remainder.
    else
        printf("%d",result);
}

int main(){

    setvbuf(stdout, NULL, _IONBF, 0);

    int user_input = 0;
    printf("Enter a number to convert to hexadecimal:");

    scanf("%d", &user_input);

    printf("\nyour number is:");

    base10_to_hexadecimal(user_input);

}