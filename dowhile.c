#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	printf("Enter the First Operand:");
	scanf("%d", &a);

	printf("Enter the Second Operand:");
	scanf("%d", &b);

	do {
		printf("a : %d b : %d\n", a, b);
		a++;
	}while(a < b);

	return 0;
}
