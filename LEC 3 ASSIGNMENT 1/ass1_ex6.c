#include <stdio.h>
int main ()
{
	float a,b,temp;
	printf("enter a value of a : ");
	scanf("%f",&a);
	printf("enter a value of b : ");
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swaping, value of a : %.2f\n",a);
	printf("After swapng, value of b: %.2f",b);
	return 0;
}