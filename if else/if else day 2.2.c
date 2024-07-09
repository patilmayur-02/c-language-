#include<stdio.h>
#include<conio.h>

int main()

{
	//Write a Program to find the maximum number from the given 4 numbers using nested
    //if else. Also, draw a Flowchart in your book.
    
	int a,b,c,d;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	
	if(a>b)
	{
	    if(a>c)
	    {
		  if(a>d)
		  {
		  	printf("a is maximum");
		  }
		  else
		  {
		  	printf("d is maximum");
		  }
		}
		else
		{
		 if(c>d)
		 {
		 	printf("c is maximum");
		 }
		 else
		 {
		 	printf("d is maximum");
		 }
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
}
