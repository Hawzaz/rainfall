#include <iostream>
#include <cstring>
class N {
	public:

	char 	*s1;
	int		i;

	N::N(int i)
	{
		this->i = i;
	}

	N N::operator+(N& n)
	{
		return (n.i + this->i);
	}

	N N::operator-(N& n)
	{
		return (n.i - this->i);
	}

	void setAnnotation(char *str) {
		size_t n;

		n = strlen(str);
		memcpy(this->s1, str, n);
	}

};

int main (char ac, char **av) 
{
	N *n1 = new N(5);
	N *n2 = new N(6);

	if (ac < 2) {
		exit(1);
	}
	n1->setAnnotation(av[1]);
	
	return (n1 + n2);
}