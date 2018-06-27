#include <stdio.h>

union una {
	unsigned int a;
	unsigned char x[4];
};

int main(int argc, char *argv[]) {

	union una u;

	printf("Enter the integer:0x");
	scanf("%x", &u.a);

	printf("Int: %x char[3]: %x char[2]: %x char[1]: %x char[0]: %x\n", u.a, u.x[3], u.x[2], u.x[1], u.x[0]);

	return 0;
}
