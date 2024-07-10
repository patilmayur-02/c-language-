#include<stdio.h>
#include<conio.h>

main ()

{
	printf ("jio call service\n");
	 
	 
	printf ("Press 1 for English\n");
	printf ("Press 2 for hindi\n");
	printf ("Press 3 for gujrati\n");
	int choice;
	 printf("Enter your choice");
	 scanf("%d", &choice);
	 switch (choice)
	 {
	 case 1 : printf ("Press 1 for Internet Recharge\n");
     case 2 : printf ("press 2  for Top-up Recharge\n");
     case 3 : printf ("press 3 for Special Recharge \n");
     printf("Enter your choice\n\n");
     }

}