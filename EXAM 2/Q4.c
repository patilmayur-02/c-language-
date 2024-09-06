#include<stdio.h>


void main()
{
	int a,b,c;
	
	printf("Enter the value of A :");
	scanf("%d",&a);
	
	printf("Enter the value of B :");
	scanf("%d",&b);
	
	printf("Enter the value of B :");
	scanf("%d",&c);
	
	if(a<b)
	{
		printf("a is minimum");
	}
	else if(b<c)
	{
		printf("b is minimum");
	}
	else
	{
		printf("c is minimum");
	}
}
