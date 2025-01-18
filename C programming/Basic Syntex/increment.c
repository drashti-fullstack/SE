//increment
#include<stdio.h>
int main()
{
	int a=10;
	int b=a;
	printf("\nValue of a pre increment = %d",++a);
	printf("\nValue of a after increment = %d",a);
	printf("\nValue of a post increment = %d",b++);
	printf("\nValue of a after increment = %d",b);
	return 0;
}
