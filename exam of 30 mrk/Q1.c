#include<stdio.h>
void main()

{
	int A,B,C;
	printf("enter the value of A");
	scanf("%d",&A);
	
	printf("enter the value of B");
	scanf("%d",&B);
	
	printf("enter the value of C");
	scanf("%d",&C);
	
	if (A<B)
	{
		printf(" A is minimum");
	}	
	else
	{
		if (B<C)
		{
			printf(" B is minimum");
		}
		else
		{
			if (B>C)
			{
				printf(" C is minimum");
			}
		}
	}
	
		
	
}