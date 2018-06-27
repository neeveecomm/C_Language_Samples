#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	printf("Enter the First Operand:");
	scanf("%d", &a);

	printf("Enter the Second Operand:");
	scanf("%d", &b);

	result = a + b;
	printf("Addition: %d\n", result);

	result = a - b;
	printf("Subtraction: %d\n", result);

	result = a * b;
	printf("Multiplication: %d\n", result);

	result = a / b;
	printf("Division: %d\n", result);

	result = a % b;
	printf("Modulus: %d\n", result);

	result = a;
	printf("incrment by one: %d\n", result++);
	printf("incrment by one: %d\n", result);

	result = a;
	printf("pre incrment by one: %d\n", ++result);

	result = a;
	printf("decrement by one: %d\n", result--);
	printf("decrement by one: %d\n", result);

	result = a;
	printf("pre decrement by one: %d\n", --result);

	return 0;
}
