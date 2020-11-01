#include <stdbool.h>
#include <stdio.h>

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);

//    printf("The character is %c \n", 'a');
//
//    int num = 512;
//
//    printf("The number is %d \n", num);
//
//    printf("The integer variable is located at 0x%p \n", &num);
//
//    char ch = 'q';
//
//    printf("the character is %c \n", ch);
//
//    printf("The character variable is located at 0x%p \n", &ch);

//    int x;
//    printf("Enter a number: ");
//
//    scanf("%d", &x);
//
//    printf("the number is %d. \n", x);

//    int c;
//    printf("Enter a character: \n");
//
//    scanf("%c", &c);
//
//    printf("the character is %c. \n", c);

    int a = 1;
    unsigned int b = 2;
    short c = 3;
    unsigned short d = 4;
    long e = 5L;
    unsigned  long f = 6UL;
    long long g = 7LL;
    unsigned  long long h = 8ULL;

    printf("%d\n", a);
    printf("%u\n", b);
    printf("%d\n", c);
    printf("%u\n", d);
    printf("%ld\n", e);
    printf("%lu\n", f);
    printf("%lld\n", g);
    printf("%llu\n", h);


    printf("%llu\n", 0x80000000ULL * 0x80000000ULL);



    float my_float;

    scanf("%f", &my_float);

    printf("The floating number is %f \n", my_float);



    return 0;
}
