#include <stdio.h>

float multiplyby10(float a);

int mulby10(int a)
{
	return a * 10;
}

void print_hello(void)
{
	printf("Hello World\n");
}

int main(int argc, char *argv[])
{
	int x; 
	float f;
	int ret;
	
	printf("Enter the integer:");
	scanf("%d", &x);

	printf("Enter the float:");
	scanf("%f", &f);

	print_hello();

	ret = mulby10(x);
	f = multiplyby10(f);

	printf("Ret: %d -- %f\n", ret, f);

	return 0;
}

float multiplyby10(float a)
{
	return a * 10;
}

