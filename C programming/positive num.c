//Write a program to take positive numbers from the user untill user enters -1 and display sum,average,minimum,maximum and count of all numbers.
#include<stdio.h>
int main()
{	
	int num,sum,min,max,count;
	float avg;
	
	up:
	printf("\nEnter positive num to continue or -1 to exit = ");
	scanf("%d",&num);
	if(num < -1)
	{
		printf("\nPlease enter positive number only");
		goto up;
	}
	else if(num >= 0)
	{
		goto up;
	}
	else if(num == -1)
	{
		goto down;
	}
	else
	{
		goto up;
	}
	down:
	printf("\nsum= %d",sum);
	printf("\nAverage= %.2f",avg);
	printf("\nminimum= %d",min);
	printf("\nmaximum= %d",max);
	printf("\ncount= %d",count);
	
	return 0;
}

