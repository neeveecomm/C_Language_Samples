#include <stdio.h>

int main(int argc, char *argv[])
{
	int a;
	int *ptr;

	printf("Enter the integer:");
	scanf("%d", &a);

	ptr = &a;

	printf("Value of a: %d ptr content: %d\n", a, *ptr);

	return 0;
}
