#include <stdio.h>
int main(int argc, char *argv[]) {
    int a;
    printf("input a year :");
    scanf("%i", &a);

    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        printf("%i is a leap year.\n", a);
    } else {
        printf("%i is not a leap year.\n", a);
    }

    return 0;
}

