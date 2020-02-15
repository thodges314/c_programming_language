#include <stdio.h>

int getCharSkipWhite();

int main()
{
	int c;
	c = getCharSkipWhite();
	while (c != EOF)
	{
		putchar(c);
		c = getCharSkipWhite();
	}
	return 0;
}

int getCharSkipWhite()
{
	int c;
	while ((c = getchar()) == ' ' || c == '\n' || c == '\t')
		;
	return c;
}