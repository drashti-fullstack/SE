//swap two variables without using third varible(use + and -)
#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	
	printf("\nValue of a before swapping = %d",a);
	printf("\nValue of b before swapping = %d",b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\nValue of a after swapping = %d",a);
	printf("\nValue of a after a swapping = %d",b);
	
	return 0 ;	
}
