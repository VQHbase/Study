#include <stdio.h>

int main()
{
	int a, b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	
	float output = (float)a/b;
	float output2 = (int)output;
	
	printf("%d/%d = %f", a, b, output);
	printf("\noutput2= %d", output2);
}
