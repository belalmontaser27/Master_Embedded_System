#include <stdio.h>
int main ()
{
	float a,b;
	printf("enter value of a : ");
	scanf("%f",&a);
	printf("enter value of b : ");
	scanf("%f",&b);
	a += b;
	b = a - b;
	a -= b;
	printf("\nAfter swaping, value of a = %.2f\n",a);
	printf("After swaping, value of b = %.2f\n",b);
	return 0;
}