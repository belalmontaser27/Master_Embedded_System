#include <stdio.h>
int main ()
{
	float a,b,c ;
	printf("enter three numbers: ");
	scanf("%f%f%f",&a,&b,&c);
	if (a>=b&&a>=c)
		printf("Largest number = %.2f",a);
	else if (b>=a&&b>=c)
		printf("Largest number = %.2f",b);
	else
		printf("Largest number = %.2f",c);
	return 0;
}