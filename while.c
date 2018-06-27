#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	printf("Enter the First Operand:");
	scanf("%d", &a);

	printf("Enter the Second Operand:");
	scanf("%d", &b);

	while( a < b) {
		printf("a : %d b : %d\n", a, b);
		a++;
	}

	return 0;
}
