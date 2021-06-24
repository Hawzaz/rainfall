#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char c[68];

struct 		t_char
{
	char 	*s;
	int		i;
}			s_char;

void	m(void)
{
	time_t t;

	t = time(NULL);
	printf("%s - %d\n", c, t);
}

int		main(void)
{
	struct t_char *o,*p;
	FILE *fp;

	o = malloc(8);
	o->i = 1;
	o->s = malloc(8);
	o = 2;
	o.s3 = malloc(8);
	strcpy(, );
	strcpy(, );
	fp = fopen("/home/user/level8/.pass", "r");
	fgets(c, 68, fp);
	puts("~~");
	return (1);
}
