#include <stdio.h>

#define IN 1	// inside a word
#define OUT 0 // outside a word

// count words and chars in input
int main()
{
	int c, nw, nc, state;

	state = OUT;
	nw = nc = 0;
	while ((c = getchar()) != '\n')
	{
		++nc;
		if (c == ' ' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d", nw, nc);
}