#include <stdio.h>

int main()
{
	long nc;

	nc = 0;
	while (getchar() != 10)
		++nc;
	printf("%ld\n", nc);
}