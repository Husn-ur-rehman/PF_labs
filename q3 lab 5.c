#include<stdio.h>
int main(void)
{
	int Fsc_marks, NTS_marks;
	
	printf("Enter your Fsc percentage :");
	scanf("%d",& Fsc_marks);
	
	printf("Enter your NTS percentage :");
	scanf("%d",& NTS_marks);
	
	switch(NTS_marks)
	{
		case 70:
			if(Fsc_marks>70)
			printf("You are allocated to Oxford University in IT Department");
		break;
		case 60:
			if(Fsc_marks>70)
			printf("You are allocated to Oxford University in Electrical Department");
		break;
		case 50:
			if(Fsc_marks>70)
			printf("You are allocated to Oxford University in Telecommunication Department");
			else if(Fsc_marks<=70 && Fsc_marks>=60)
			printf("You are allocated to MIT University in IT Department");
			else if(Fsc_marks<60 && Fsc_marks>=50)
			printf("You are allocated to MIT University in Chemical Department");
			else if(Fsc_marks<50 && Fsc_marks>40)
			printf("You are allocated to MIT University in Computer Department");
			else
			printf("You are not allocated in any university");
			break;
	default:
		printf("ENTER the percentage of NTS 70 , 60 or 50");
	}
	return 0;
}