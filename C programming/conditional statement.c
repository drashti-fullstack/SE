//Write a program to take a numbers from the user and check whether it is positive,negative,or nuetral.
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("\n%d is the positive numbers",num);
	}
	else if(num<0)
	{
		printf("\n%d is the negative number",num);
	}
	else
	{
		printf("\n%d is the nutral number",num);
	}
	return 0;
}
