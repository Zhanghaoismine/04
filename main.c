#include <stdio.h>
int main(int argc, char *argv[]) {
    int a, hours, minutes, seconds;

    printf("input seconds :");
    scanf("%d", &a);

    hours = a / 3600;
    a %= 3600;
    minutes = a / 60;
    seconds = a % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
