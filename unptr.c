#include <stdio.h>

union una {
	int a;
	char x[4];
};

int main(int argc, char *argv[])
{
	union una u;
	union una *ptr;	

	ptr = &u;

	printf("Enter the integer:0x");
	scanf("%x", &ptr->a);

	printf("Int: %x char[3]: %x char[2]: %x char[1]: %x char[0]: %x\n", ptr->a, ptr->x[3], ptr->x[2], ptr->x[1], ptr->x[0]);


	return 0;
}
