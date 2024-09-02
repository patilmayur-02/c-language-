# include<stdio.h>

// Write a Program to check if a given number is divisible by both 3 & 5 or not using
//UDF.
void aryan ()

{	int n;
	printf("entre the value of divisible");	
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0)
	{
		printf("the value is divisible by 3 & 5");
	}
	else if(n%3==0)
	{
		printf("the value is divisible by 3");
	}
	else if(n%5==0)
	{
		printf("the value is divisible by 5");
	}
	else
	{
		printf("the value is not divisible by 3 & 5");
	}
	
	
}
void main()
{
	aryan();
}
