#include<stdio.h>
void main()
{
	int i=1, n;

	printf("enter a number : ");
	scanf("%d",&n);
	
	
	
	while(n>9)
	{
		n=n/10;
		i++;
 	}
	
		
		printf("your number %d digit number",i);
	
}