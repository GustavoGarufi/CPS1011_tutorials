//
// Created by gusga on 01/11/2020.
//

#include <stdbool.h>
#include <stdio.h>

int main() {

    setvbuf(stdout, NULL, _IONBF, 0);

    char name_1[16];
    char surname_1[16];
    int age_1 = 0;
    float height_1 = 0.f;

    char name_2[16];
    char surname_2[16];
    int age_2 = 0;
    float height_2 = 0.f;

    char name_3[16];
    char surname_3[16];
    int age_3 = 0;
    float height_3 = 0.f;

//    user 1

    printf("We need to ask you a couple details, what is your name?");

    scanf("%s", name_1);

    printf("\n and your surname?");

    scanf("%s", surname_1);

    printf("\n and your age?");

    scanf("%d", &age_1);

    printf("\n lastly can you give me your height?");

    scanf("%f", &height_1);

    printf("¦ %.6s ¦ %.7s ¦ %.3d ¦ %3.2f ¦\n", name_1, surname_1, age_1, height_1);

//    user 2

    printf("\n what is the second name?");

    scanf("%s", name_2);

    printf("\n and your surname?");

    scanf("%s", surname_2);

    printf("\n and your age?");

    scanf("%d", &age_2);

    printf("\n lastly can you give me your height?");

    scanf("%f", &height_2);

    printf("¦ %.6s ¦ %.7s ¦ %.3d ¦ %3.2f ¦\n", name_2, surname_2, age_2, height_2);

//    user 3

    printf("\n what is the third name?");

    scanf("%s", name_3);

    printf("\n and your surname?");

    scanf("%s", surname_3);

    printf("\n and your age?");

    scanf("%d", &age_3);

    printf("\n lastly can you give me your height?");

    scanf("%f", &height_3);

    printf("¦ %.6s ¦ %.7s ¦ %.3d ¦ %3.2f ¦\n", name_3, surname_3, age_3, height_3);

    printf("\n\n\n");

    printf("+--------+---------+-----+--------+ \n");
    printf("| Name   | Surname | Age | Height | \n");
    printf("+--------+---------+-----+--------+ \n");
    printf("¦ %-6.6s ¦ %-7.7s ¦ %3d ¦ %3.2f   ¦\n", name_1, surname_1, age_1, height_1);
    printf("+--------+---------+-----+--------+ \n");
    printf("¦ %-6.6s ¦ %-7.7s ¦ %3d ¦ %3.2f   ¦\n", name_2, surname_2, age_2, height_2);
    printf("+--------+---------+-----+--------+ \n");
    printf("¦ %-6.6s ¦ %-7.7s ¦ %3d ¦ %3.2f   ¦\n", name_3, surname_3, age_3, height_3);
    printf("+--------+---------+-----+--------+ \n");



    return 0;

}