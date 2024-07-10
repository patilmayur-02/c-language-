#include<stdio.h>
#include<conio.h>

main ()
{
	int x,y,z;
	printf("Enter x,y and z:");
	scanf("%d%d%d",&x,&y,&z);
	
	(x<y)?
	    (x<z)?
	        printf("x is minimum")
	        :printf("z is minimum")
	 :(y<z)?
	        printf("y is minimum")
	        : printf("z is minimum");
	
	
}
