
#include <stdbool.h>
#include <stdio.h>
#include <string.h>



int main() {
    setvbuf(stdout, NULL, _IONBF, 0);

    char buffer[16];

    printf("Enter something to turn into palindrome:");

    scanf("%s", buffer);

    char output[32];
    strcpy(output, buffer);
    strrev(buffer);
    strcat(output,buffer);

    printf("%s", output);

    return 0;
}