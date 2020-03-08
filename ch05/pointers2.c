#include <stdio.h>

int main()
{
	int x = 1; //, *y;
	int *y, *z;
	y = &x;
	z = y;
	printf("%i, %i, %i\n", x, *y, *z);
	// printf("%i\n", x);
}