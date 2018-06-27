#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	printf("Enter the First Operand:");
	scanf("%d", &a);

	printf("Enter the Second Operand:");
	scanf("%d", &b);

	if(a < b) {
		printf("a is lesser than b\n");
	}else if(a > b) {
		printf("a is greater than b\n");
	}else{
		printf("a equals b\n");
	}

	return 0;
}
