//
// Created by gusga on 29/11/2020.
//

#include <stdio.h>
#include "q1.h"



int main (){
    setvbuf(stdout, NULL, _IONBF, 0);

    for (int i = 0; i < str_len; i++) {
        copy[i] = original_array[i];
        printf("   %2d        %2d\n", original_array[i], copy[i]);
    }

    return 0;
}