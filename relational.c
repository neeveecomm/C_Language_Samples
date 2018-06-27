#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	printf("Enter the First Operand:");
	scanf("%d", &a);

	printf("Enter the Second Operand:");
	scanf("%d", &b);

	result = a == b;
	printf("== Result: %d\n", result);

	result = a != b;
	printf("!= Result: %d\n", result);

	result = a > b;
	printf("> Result: %d\n", result);

	result = a < b;
	printf("< Result: %d\n", result);

	result = a >= b;
	printf(">= Result: %d\n", result);

	result = a <= b;
	printf("<= Result: %d\n", result);

	return 0;
}
