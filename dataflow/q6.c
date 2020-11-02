//
// Created by gusga on 02/11/2020.
//

#include <stdbool.h>
#include <stdio.h>

float euro_to_gbp(float eur){
    return eur * 0.899109;
}

int main() {

    setvbuf(stdout, NULL, _IONBF, 0);

    float eur=0.f;

    printf("How many Euro do you want to convert? \n");

    scanf("%f", &eur);

    printf("%.2f euros is %.2f\n", eur, euro_to_gbp(eur) );




    return 0;

}