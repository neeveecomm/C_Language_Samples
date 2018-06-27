#include <stdio.h>

static int sglobal = 40;

int function(void)
{
	printf("%d\n", sglobal);
	return 0;
}

int main(int argc, char *argv[])
{
	printf("%d\n", sglobal);
	function();
	printf("%d\n", sglobal);
	sglobal=65;
	printf("%d\n", sglobal);
	function();

	func();

	return 0;
}
