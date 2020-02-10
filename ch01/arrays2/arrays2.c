#include <stdio.h>
#define STEP 3
#define MAX 255

//exercise 1.13
int main()
{
	int c, i, j, greatest, count, maxlines, units;
	units = MAX / STEP + ((MAX % STEP == 0) ? 0 : 1);
	int nlength[units];
	c = count = greatest = maxlines = 0;

	for (i = 0; i < units; ++i)
		nlength[i] = 0;

	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\t' || c == '\n')
		{
			(count != 0) && ++nlength[(count - 1) / STEP];
			(count != 0) && ((count - 1) / STEP > greatest) && (greatest = (count - 1) / STEP);
			count = 0;
		}
		else
			++count;

	for (i = 0; i <= greatest; ++i)
	{
		(nlength[i] > maxlines) && (maxlines = nlength[i]);
		printf("%3d - %3d  ", (i * STEP + 1), ((i + 1) * STEP));
	}
	printf("\n");
	for (i = 1; i <= maxlines; ++i)
	{
		for (j = 0; j <= greatest; ++j)
		{
			(nlength[j] >= i) ? printf("*********  ") : printf("           ");
		}
		printf("\n");
	}
}