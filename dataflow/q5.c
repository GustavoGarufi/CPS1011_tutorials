//
// Created by gusga on 24/11/2020.
//

#include "q2.h"
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

int main(void) {

    setvbuf(stdout, NULL, _IONBF, 0);

    float num_of_days;

    printf("give me a number of days to convert:");

    scanf("%f", &num_of_days);

    float weeks = num_of_days/7;

    if (weeks == (int)weeks)
        printf("\n that's %d Weeks!", weeks);
    else {
        if (weeks < 1 ) {
            printf("\n That's just %.0f Days!", num_of_days);
            exit(0);
        }
        if (( (int)(floor( fabs( weeks ) * 10 ) ) ) % 10 == 1)
            printf("\n That's %.0f Weeks and 1 Day", weeks);
        if (( (int)(floor( fabs( weeks ) * 10 ) ) ) % 10  == 2)
            printf("\n That's %.0f Weeks and 2 Days", weeks);
        if (( (int)(floor( fabs( weeks ) * 10 ) ) ) % 10 == 4)
            printf("\n That's %.0f Weeks and 3 Days", weeks);
        if (( (int)(floor( fabs( weeks ) * 10 ) ) ) % 10  == 5)
            printf("\n That's %.0f Weeks and 4 Days", weeks);
        if (( (int)(floor( fabs( weeks ) * 10 ) ) ) % 10  == 7)
            printf("\n That's %.0f Weeks and 5 Days", weeks);
        if (( (int)(floor( fabs( weeks ) * 10 ) ) ) % 10  == 8)
            printf("\n That's %.0f Weeks and 6 Days", weeks);
    }
}