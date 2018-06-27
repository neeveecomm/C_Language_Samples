#include <stdio.h>

int function(void)
{
	static int x = 40;

	printf("%d\n", x);
	x = x + 10;
	printf("%d\n", x);
	return 0;
}

int main(int argc, char *argv[])
{
	function();
	function();
	function();
	function();

	return 0;
}
