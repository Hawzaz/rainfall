void p (char *dest, char *s)
{
	char buff[4096];
	char *src;

	puts(s);
	read(0, buff, 4096);
	strchr(buff, '\n') = 0;
	
	strncpy(buff, dest, 20);
	return;
}

void pp(char *dest)
{
	char s1[20];
	char s2[20];

	p(s1," - ");
	p(s2," - ");
	strcpy(s1, dest);
	dest[strlen(dest)] = ' ';
	strcat(s2, dest);
	return;
}

int main(void)
{
	char *s;
	pp(s);
	puts(s);
	return 0;
}