#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("\nEnter the element on a[%d] ",i);
		scanf("%d",&a[i]);
	}
	printf("\nElements of an array = ");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}	
	return 0;
}

