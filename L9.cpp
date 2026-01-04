#include <stdio.h>

int main()
{
	//varies
	int a, b, min, max;
	
	//input
	printf("a input: ");
	scanf("%d",&a);
	printf("b input: ");
	scanf("%d",&b);
	
	//process
	min = (a<b)?a:b;
	max = (a>b)?a:b;
	
	//output
	printf("\nmin is %d", min);
	printf("\nmax is %d", max);
}
