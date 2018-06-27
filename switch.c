#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	printf("Enter the First Operand:");
	scanf("%d", &a);

	switch(a) {
		case 0:
			printf("Case 0\n");
			break;
		case 1:
			printf("Case 1\n");
			break;
		default:
			printf("Case default\n");
			break;
	}
	return 0;
}
