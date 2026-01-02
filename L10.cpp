#include <stdio.h>

int main()
{
	//varies for ax + b = 0
	float a, b, x;
	
	//input
	printf("input for ax+b=0");
	printf("\na = ");
	scanf("%f", &a);
	printf("\nb = ");
	scanf("%f", &b);
	
	//process
	x = -b/a;
	
	//output
	printf("x = %.2f", x);
	
	
	
}
