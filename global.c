#include <stdio.h>

int global = 45; /* initialized global variable */
int a; /* Uninitialized global variable */

int function(void)
{
	printf("%d\n", global);
	printf("%d\n", a);

	return 0;	
}

int main(int argc, char *argv[])
{
	function();
	global = 30;
	function();

	func();

	function();

	return 0;
}
