//
// Created by gusga on 08/11/2020.
//

#include <stdio.h>

int main(){

    // int i is the first number (row) of the multiplication, j is the second (column)
    int i,j;

    // this loops the first number and add 1 per row
    for(i=1;i<=10;i++){


        // this second loop add 1 number per column
        for(j=1;j<=10;j++){

            // here we multiply and print the numbers formatted
            printf(" %3.d ", j*i);
        }
        // I used this at the end of each loop to make a new row
        printf("\n");
    }

}