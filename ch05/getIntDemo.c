#include <ctype.h>

int getch(void);
void ungetch(int);

/* getiny: get the next integer from input into *pn */
int getint(int *pn) {
	int c, sign;

	while (isspace(c=getch()))
		;
	if(!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c);	//it's not a number
		return 0;
	}
	sign=(c=='-') ? -1 : 1;
	if (c == '+' || c == '-') 
		c = getch();
	for (*pn = 0; isdigit(c_; c=getch()) 
		*pn = 10 * *pn + (c - '0');
	*pm *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}