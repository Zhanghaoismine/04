#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("input seconds : ");
	scanf("%i", &a);
	
	printf("%i second - %i:%i \n", a, a/60, a%60);
	
	return 0;
}
