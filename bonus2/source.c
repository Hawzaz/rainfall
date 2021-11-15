int language;

int greetuser(char *str)
{
	char *s1;

	if (language == 0)
	{
		strcpy(s1, "Hello ");
	}
	else if (language == 1)
	{
		strcpy(s1, "Hyvää päivää ");
	}
	else if (language == 2)
	{
		strcpy(s1, "Goedemiddag! ");
	}
	strcat(s1, str);
	puts(s1);
	return 0;
}

int main(int ac, char **av)
{
	char *dest;
	char *s1;

	if (ac == 3)
	{
		memset(dest, 0, 19);
		strncpy(dest, av[1], 40);
		strncpy(dest[40], av[2], 32);
		s1 = getenv("LANG");
		if (s1 != 0)
		{
			if (memcmp(s1, "fi", 2) == 0)
				language = 1;
			else if (memcmp(s1, "nl", 2) == 0)
				language = 2;
		}
		greetuser(dest);
	}
	return 0;
}