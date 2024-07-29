#include<stdio.h>
#include<conio.h>

void main ()

{
	int marks;
	char grade;
	printf("enter your marks : ");
	
	scanf("%d",&marks);
	(marks>=80 & marks<=100)?
	
			printf("Your grade is A", grade = 'A')
	
	:
	
		(marks>=70 & marks<80)?
		
			printf("Your grade is B", grade = 'B')
		
		:
		
			(marks>=60 & marks<70)?
				
				printf("Your grade is C", grade = 'C')
			
			:
			
				(marks>=33 & marks<60)?
				
					printf("Your grade is D", grade = 'D')
				
				:
					
	              	(marks>=0 & marks<33)?
						
						:	printf("Your grade is F", grade = 'F');
						
					
	switch(grade)
	{
	case 'A' : printf("Excellent work!");
	break;
	
	case 'B' : printf("Well done");
	break;
	case 'C' : printf("Good job");
	break;
	case 'D' : printf("‘You passed,but could try better !");
	break;
	case 'F' : printf("Sorry, you failed");
	break;
	}
	
	if(grade=='A' || grade=='B' || grade=='C' || grade=='D' || grade=='E')
	{
		printf("You are eligible for the next level.");
	}
	
	else
	{
		printf("Please try again next time");
	}
	
}