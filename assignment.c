#include <stdio.h>

int main(int argc, char *argv[])
{
	int a;
	int result;

	printf("Enter the First Operand:");
	scanf("%d", &a);

	result = a;
	printf("= Result: %d\n", result);

	result = 1000;
	result += a;
	printf("+= Result: %d\n", result);

	result = 1000;
	result -= a;
	printf("-= Result: %d\n", result);

	result = 1000;
	result *= a;
	printf("*= Result: %d\n", result);

	result = 1000;
	result /= a;
	printf("/= Result: %d\n", result);

	result = 1000;
	result %= a;
	printf("Modulus= Result: %d\n", result);

	result = 1000;
	result >>= a;
	printf(">>= Result: %d\n", result);

	result = 1000;
	result <<= a;
	printf("<<= Result: %d\n", result);

	
	return 0;
}
