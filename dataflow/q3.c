#include <stdio.h>

int convert_floor(float x) {
    return int(x);
}

int round_up(float x){
    return x + 0.5f;
}

int main(){

    setvbuf(stdout, NULL, _IONBF, 0);

    float float_input = 0.f;

    printf("Enter a float: ");

    scanf("%f", float_input);

    printf("your floor is: %d", convert_floor(float_input));


}