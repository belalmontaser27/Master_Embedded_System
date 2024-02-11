#include <stdio.h>
int main ()
{
	int num,count,sum=0 ;
	printf("enter an integer: ");
	scanf("%d",&num);
	for (count=1;count<=num;++count)
	{
		sum+=count;
	}
	printf("sum = %d",sum);
	return 0;
}