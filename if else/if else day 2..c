#include<stdio.h>
#include<conio.h>

void main()

{
	int A, B, C;
	
	printf("Enter the value of A : ");
	scanf("%d",&A);
	
	printf("Enter the value of B : ");
	scanf("%d",&B);
	
	printf("Enter the value of C : ");
	scanf("%d",&C);
	
	// A
	if(A<B)
	{
		if(A<C)	
		{
			printf("A is minimum");
		}
		else
		{
			printf("C is minimum");
		}
	}
	else
	{
	 if(B<C)	
		{
			printf("B is minimum");
		}
		else
		{
			printf("C is minimum");
		}
	}
	
	
}