#include <stdio.h>

int main()
{
	int a;
	printf("a input: ");
	scanf("%d", &a);
	
	printf("%d is %s", a, (a%2==0)?"even":"odd");
}
