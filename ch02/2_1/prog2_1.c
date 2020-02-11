#include <stdio.h>
#include <limits.h>
int main()
{
    printf("Signed char min: \t%d\n", SCHAR_MIN);
    printf("Signed char max: \t%d\n", SCHAR_MAX);
    printf("Unsigned char min:\t%d\n", CHAR_MIN);
    printf("Unsigned char max:\t%d\n", CHAR_MAX);
    printf("Signed short min:\t%d\n", SHRT_MIN);
    printf("Signed short max:\t%d\n", SHRT_MAX);
    printf("Unsigned short max:\t%d\n", USHRT_MAX);
    printf("Signed int min:\t\t%d\n", INT_MIN);
    printf("Signed int max:\t\t%d\n", INT_MAX);
    printf("Unsigned int max:\t%d\n", UINT_MAX);
    printf("Signed long min:\t%lu\n", LONG_MIN);
    printf("Signed long max:\t%lu\n", LONG_MAX);
    printf("Unsigned long max:\t%lu\n", ULONG_MAX);
}

/*
Signed char min: 	-128
Signed char max: 	127
Unsigned char min:	-128
Unsigned char max:	127
Signed short min:	-32768
Signed short max:	32767
Unsigned short max:	65535
Signed int min:		-2147483648
Signed int max:		2147483647
Unsigned int max:	-1
Signed long min:	9223372036854775808
Signed long max:	9223372036854775807
Unsigned long max:	18446744073709551615
*/