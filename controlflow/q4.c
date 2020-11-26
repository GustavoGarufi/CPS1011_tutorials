//
// Created by gusga on 26/11/2020.
//

#include <stdio.h>

#define MAX_NUM_PEOPLE 3
#define MAX_STR_LEN 16

int main (void){
    setvbuf(stdout, NULL, _IONBF, 0);

    char name[MAX_NUM_PEOPLE][MAX_STR_LEN + 1];
    char surname[MAX_NUM_PEOPLE][MAX_STR_LEN + 1];
    int age[MAX_NUM_PEOPLE];
    float height[MAX_NUM_PEOPLE];

    int ages = 0;
    int heights = 0;

    for (int i = 0; i < MAX_NUM_PEOPLE; ++i) {
        printf("Details for person number %d\n", i +1);

        printf("\n name:");
        scanf("%s", name[i]);
        printf("\n surname:");
        scanf("%s", surname[i]);

        printf("\n age:");
        scanf("%d", &age[i]);

        printf("heightL");
        scanf("%f", &height[i]);
    }

    printf("+---------+---------+-----+--------+\n");
    printf("¦ Name    ¦ Surname ¦ Age ¦ Height ¦\n");
    printf("+---------+---------+-----+--------+\n");

    for (int i = 0; i < MAX_NUM_PEOPLE; ++i) {
        printf("¦ %7.7s ¦ %7.7s ¦ %3d ¦ %6.2f ¦\n", name[i], surname[i], age[i], height[i]);

        ages += age[i];
        heights += height[i];
    }

    printf("+---------+---------+-----+--------+\n\n");

    printf("Average age    : %.2f\n", (float)ages / MAX_NUM_PEOPLE);
    printf("Average height : %.2f\n", (float)heights / MAX_NUM_PEOPLE);

}