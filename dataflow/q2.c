//
// Created by gusga on 01/11/2020.
//

#include "q2.h"
#include <stdbool.h>
#include <stdio.h>

int main(void) {

    setvbuf(stdout, NULL, _IONBF, 0);

    char user_char;

    printf("Put in an integer to convert to a ascii character:");
    scanf("%d", &user_char);

    printf("Your char is: %c (%d) \n", user_char, user_char);

    int char_1 = 14;
    int char_2 = 156;
    int char_3 = 171;
    int char_4 = 241;

    printf("the look at these integers %c (%d) %c (%d) %c (%d) %c (%d)", char_1, char_1, char_2, char_2, char_3, char_3, char_4, char_4);



}