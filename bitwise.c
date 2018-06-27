#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	printf("Einter the First Operand:0x");
	scanf("%x", &a);

	printf("Enter the Second Operand:0x");
	scanf("%x", &b);
	
	result = a & b;
	printf("& result = 0x%08x\n", result);

	result = a | b;
	printf("| result = 0x%08x\n", result);

	result = ~a;
	printf("~ result = 0x%08x\n", result);

	result = a ^ b;
	printf("^ result = 0x%08x\n", result);

	result = a >> 2;
	printf(">> result = 0x%08x\n", result);

	result = a << 2;
	printf("<< result = 0x%08x\n", result);

	return 0;
}
