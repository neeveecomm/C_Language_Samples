#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char name[64];
	char cname[64];
	char fname[64];
	char lname[64];
	int i;
	int ret;
	
	printf("Enter the name:");
	scanf("%s", name);
	printf("Name: %s\n", name);

	printf("Enter the cname:");
	scanf("%s", cname);
	printf("CName: %s\n", cname);

	printf("Enter the Fname:");
	scanf("%s", fname);
	printf("FName: %s\n", fname);

	printf("Enter the lname:");
	scanf("%s", lname);
	printf("LName: %s\n", lname);

	strcat(fname, lname);
	printf("FName STRCAT: %s\n", fname);
	
	ret = strncmp(name, cname, 5);
	if(ret == 0) {
		printf("Both are equal\n");
	}else if(ret < 0) {
		printf("name is lesser\n");
	}else {
		printf("cname is lesser\n");
	}

	memset(fname, 0, 10);
	strncpy(fname, name, 4);
	printf("FName: %s\n", fname);

	return 0;
}
