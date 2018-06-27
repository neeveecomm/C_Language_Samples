#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}

int main(int argc, char *argv[])
{
	int a, b;
	int result;
	int (*fptr)(int a, int b);

	printf("Enter the first operand:");
	scanf("%d", &a);

	printf("Enter the second operand:");
	scanf("%d", &b);

	fptr = add;
	result = fptr(a, b);
	printf("Result: %d\n", result);
	
	fptr = sub;
	result = fptr(a, b);
	printf("Result: %d\n", result);
	
	fptr = mul;
	result = fptr(a, b);
	printf("Result: %d\n", result);
	
	fptr = div;
	result = fptr(a, b);
	printf("Result: %d\n", result);
	
	return 0;
}
