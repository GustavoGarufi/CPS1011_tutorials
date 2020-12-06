//
// Created by gusga on 30/11/2020.
// Following the tutorial we did in the class together

#include <stdio.h>



int main (int argc, char * argv[]){
    setvbuf(stdout, NULL, _IONBF, 0);

    int num_1;
    int num_2;


    if ( sscanf(argv[1], "%d", &num_1) == 0 ||  sscanf(argv[2], "%d", &num_2) == 0 ){
        printf("Invalid input");
        return 1;
    }


    if (argc != 3){
        printf("Error, not two integers");
        return 1;
    }

    printf("%d + %d = %d", num_1, num_2, num_1 + num_2);


}