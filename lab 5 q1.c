// PROGRAM TO ASK A QUESTION BEFORE DELETING ANYTHING 
#include<stdio.h>
int main(void)

{
	char del;
	
	printf("ARE YOU SURE TO DELETE [Y/y]/[N/n]");
	scanf("%c",& del);
	switch(del)
	{
		case 'Y':
		case 'y':
			printf("DELETE SUCCESSFULLY");
			break;
		case 'N':
		case 'n':
			printf("DELETE CANCELLED");
			break;
		default:
			printf("Incorrect character");
			break;			
	}
	
	return 0;
	
}