#include <stdio.h>
int main ()
{
	int num,count;
	unsigned long long int factorial=1;
	printf("enter an integer: ");
	scanf("%d",&num);
	if (num<0)
		printf("Error!!! Factorial of negative number doesn't exixst.");
	else
	{
		for(count=1;count<=num;++count)
		{
			factorial*=count;
		}
		printf("Factorial = %lu",factorial);
	}
	return 0;
}