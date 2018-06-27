#include <stdio.h>

static int sglobal = 40;

int function(void)
{
	int local = 10;

	printf("%d\n", local);
	return 0;
}

int main(int argc, char *argv[])
{
	int local = 0;

	printf("%d\n", local);
	function();
	printf("%d\n", local);
	local=65;
	printf("%d\n", local);
	function();

	return 0;
}
