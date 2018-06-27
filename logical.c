#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	printf("Enter the First Operand:");
	scanf("%d", &a);

	printf("Enter the Second Operand:");
	scanf("%d", &b);

	result = a && b;
	printf("&& result : %d\n", result);

	result = a || b;
	printf("|| result : %d\n", result);

	result = !a;
	printf("! result : %d\n", result);

	return 0;
}
