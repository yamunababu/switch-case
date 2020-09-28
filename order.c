#include<stdio.h>
main()
{
	printf("Pick an item\n");
	printf("1.pizza");
	printf("2.burger");
	printf("3.pasta");
	printf("4.french fries");
	printf("5.sandwich");
	int choice;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("you picked pizza\n prize of pizza=Rs239:");
			scanf("%d",&choice) ;
			break;
		case 2:
			printf("you picked burger\n prize of burger=Rs129:");
			scanf("%d",&choice);
			break;
		case 3:
			printf("you picked pasta\n prize of pasta=Rs179:");
			scanf("%d",&choice);
			break;
		case 4:
			printf("you picked french fries\n prize of French fries=Rs99:");
			scanf("%d",&choice);
			break;
		case 5:	
			printf("you picked sandwich\n prize of sandwich=Rs149:");
			scanf("%d",&choice);
			break;
		default:
			printf("Invalid choice");
			break;
			
	}
return 0;
}
