#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	printf("Enter the First Operand:");
	scanf("%d", &a);

	printf("Enter the Second Operand:");
	scanf("%d", &b);

	printf("a is %s than b\n", a < b ? "lesser" : "not lesser");

	result = a < b ? 1 : 0;

	printf("result: %d\n", result);

	return 0;
}
