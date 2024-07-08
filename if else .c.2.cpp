#include<stdio.h>
#include<conio.h>

main ()
{
	int x;
	printf("enter the value of X  :  ");
	scanf("%d",&x);
	
	if(x==0)
	{
	printf("number is neutral !");
	}
	else if (x<0)
	{
	printf("number is negative !");
	}
		else if (x>0)
	{
	printf("number is positive !");
	}
}