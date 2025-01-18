#include<stdio.h>
int main()
{
	int size,a[100],i;
	printf("\nenter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] ",i);
		scanf("%d",&a[i]);	
	}
	printf("\nElement of an array = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
