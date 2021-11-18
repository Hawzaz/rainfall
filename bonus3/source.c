#include <stdio.h>
#include <stdint.h>

int main(int ac, char **av)
{
	char *str;
	char *str2;
	FILE *file;

	file = fopen("/home/user/end/.pass", 'r');
	memset(str, '0', 33);
	if (file)
	{
		if (ac == 2)
		{
			fread(str, 66, 1, file);
			atoi(av[1]);
			fread(str2, 65, 1, file);
			fclose(file);
			if (strcmp(str, av[2] == 0))
				execl("/bin/sh", 0, "sh");
			else
				puts(str + 66);
		}
	}	
	return 0;
}