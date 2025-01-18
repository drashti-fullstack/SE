#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int *ptr = &arr;
	printf("\nAddress of arr = %p",ptr);
	printf("\nAddress of element1 = %p",&arr[0]);
	printf("\nAddress of element2 = %p",&arr[1]);
	printf("\nAddress of element3 = %p",&arr[2]);
	printf("\nAddress of element4 = %p",&arr[3]);
	printf("\nAddress of element5 = %p",&arr[4]);
	
	printf("\nValue of element1 = %d",*(ptr+0));
	printf("\nValue of element2 = %d",*(ptr+1));
	printf("\nValue of element3 = %d",*(ptr+2));
	printf("\nValue of element4 = %d",*(ptr+3));
	printf("\nValue of element5 = %d",*(ptr+4));
	
	return 0;
}
