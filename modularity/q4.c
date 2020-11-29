//
// Created by gusga on 29/11/2020.
//

// very unfinished, will come back to this

#include <stdio.h>
#include <string.h>

void process_string(char *str, int str_length){


//    if ()
    printf("%d", str_length);
}

int main (){
    setvbuf(stdout, NULL, _IONBF, 0);

    char user_input[100];

    printf("Enter a string to process:");

    scanf("%c", user_input);

    size_t str_length = strlen(user_input);

    printf("%d", str_length);

    process_string(user_input, str_length);


    return 0;
}

