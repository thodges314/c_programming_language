#include <stdio.h>
int main()
{
	int c;
	printf("%d\n", EOF); // 1.7 - print the value of EOF
	while ((c = getchar()) != EOF)
		putchar(c);
}