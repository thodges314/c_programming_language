#include <stdio.h>
#define MAXLINE 1000

int max;               //max length so far
char line[MAXLINE];    //current input line
char longest[MAXLINE]; //longest line saved here

int getlinefunc(void);
void copy(void);

// print the longest input line
int main()
{
    int len; // current line length
    // extern int max;        // max length seen so far
    // extern char longest[]; // longest line saved here

    max = 0;
    while ((len = getlinefunc()) > 0)
        if (len > max)
        {
            max = len;
            copy();
        }
    if (max > 0) // there was a line
        printf("%s was longest", longest);
    return 0;
}

// reads a line into s, returns length
int getlinefunc(void) // renamed from book because getline is used
{
    int c, i;
    // extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

// copy 'from' into 'to' - assume 'to' is big enough
void copy(void)
{
    int i;
    // extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}