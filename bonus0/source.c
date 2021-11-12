int p (char *dest, char *s)
{
    char buff[64];
    char *src;

    puts(s);
    read(0, 4096, buff);
    strchr(buff, 10);
    buff[20] = 0;
    strncpy(buff, 20, dest)
    return (dest);
}

unsigned int pp(char *dest)
{
    char *src;
    p(src," - ");
    p(src," - ");
    strcpy(src, dest);
    strcat(s1, s2);
    return (dest);
}

int main(void)
{
    char *s;
    pp(&s);
    puts(&s)
    return 0;
}