#include <string.h>

int main(char **av)
{
	char buff[40];
	int n;

	n = atoi(av[1]);
	if (n < 10)
	{
		memcpy(buff, n*4, av[2]);
		if (n == 1464814662)
			execl("/bin/sh", "sh", 0);
		return 0;
	}
	return 1;
}