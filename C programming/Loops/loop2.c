//Write a c program to take 2 numbers from the user and print all the numbers between those numbers.
#include<stdio.h>
int main()
{
	int i,start,end;
	printf("\nEnterr starting value = ");
	scanf("%d",&start);
	printf("\nEnter ending value = ");
	scanf("%d",&end);		1
	
	for(i=start;i<=end;i++)
	{
		printf("\n%d",i);
	}
	return 0;
}
