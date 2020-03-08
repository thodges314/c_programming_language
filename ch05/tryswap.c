#include <stdio.h>

void swap(int *px, int *py);

int main()
{
	int x = 1, y = 2;
	printf("x=%i, y=%i\n", x, y);
	swap(&x, &y);
	printf("x=%i, y=%i\n", x, y);
}

void swap(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}