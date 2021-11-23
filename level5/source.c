#include <stdio.h>

o()
{
	system("/bin/sh");
	exit(1);
}

n()
{
	char *str;

	fgets(str, 512, stdin);
	print(str);
	exit(1);
}

int main (void)
{
	n();
	return 0;
}