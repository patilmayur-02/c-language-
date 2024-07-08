#include<stdio.h>
#include<conio.h>

void main ()
{
	int x, y;
	printf("enter the value of X  :  ");
	scanf("%d",&x);
	printf("enter the value of y  :  ");
	scanf("%d",&y);
	if(x<y)
	{
		printf(" x is minimum ");
	}
	else if(x>y)
	{
		printf(" y is minimum ");
	}

}