#include "stdio.h"
int main()
{
	int a, b;
	printf("a input: ");
	scanf("%d", &a);
	printf("b input: ");
	scanf("%d", &b);
	
	printf("\n%d == %d is %d", a, b, a==b);
	printf("\n%d > %d is %d", a, b, a>b);
	printf("\n%d < %d is %d", a, b, a<b);
	printf("\n%d >= %d is %d", a, b, a>=b);
	printf("\n%d <= %d is %d", a, b, a<=b);
	printf("\n%d != %d is %d", a, b, a!=b);
}


