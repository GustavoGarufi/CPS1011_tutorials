//
// Created by gusga on 08/11/2020.
//
#include <stdio.h>

int main(){
    int pin = 4321;

    int user_input = 0000;

    printf("please enter the 4 digit pass code:");
    scanf("%d", &user_input);

    int num_of_tries;

    int max_tries=3;

    for(num_of_tries=1; num_of_tries <= max_tries; num_of_tries++ ){
        if(user_input >= 1000 && user_input<=9999) {

            if (user_input == pin){
                printf("congratulation, you guess the code in %d tries", num_of_tries);
                break;
            } else {
                printf("passcode is not correct\n");
                printf("you have %d attempts left\n", max_tries - num_of_tries);
                scanf("%d", &user_input);
            }

        }
        else {
            printf("passcode is not 4 digits\n");
            printf("you have %d attempts left\n", max_tries-num_of_tries);
            scanf("%d", &user_input);
        }

    }

}


