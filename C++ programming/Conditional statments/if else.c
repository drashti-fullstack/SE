#include<stdio.h>
int main()
{
	int age;
	printf("\nEnter the value of age ");
	scanf("%d",&age);
	if(age>18)
	{
		printf("you are the eligible for voting");
	}
	else
	{
		printf("you are not eligible for voting");
	}
	return 0;
}
