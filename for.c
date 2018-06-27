#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	printf("Enter the First Operand:");
	scanf("%d", &a);

	for(b = 0; b < a; b++) {
		if(b == 5)
			continue;

		printf("a : %d b : %d\n", a, b);

		if(b == 10)
			break;
	}

	return 0;
}
