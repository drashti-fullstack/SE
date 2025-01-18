#include<stdio.h>
int main()
{
	int a;
	printf("\nEnter the value of a =  ");
	scanf("%d",&a);
	
	if(a % 2 == 0)
	{
		printf("\nThis number is even",a);
	}
	else
	{
		printf("\nThis number is odd",a);	
	}
	return 0;
}
