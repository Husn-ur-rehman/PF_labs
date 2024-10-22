#include<stdio.h>
int main()
{
	int amt_before_dis;
	double amt_after_dis,dis_amt;
	
	printf("Input your shopping amount :");
	scanf("%d",& amt_before_dis);
	
	if(amt_before_dis>=2000 && amt_before_dis<=4000){
	dis_amt = (float)amt_before_dis*(20.0/100);
	amt_after_dis = amt_before_dis - dis_amt;
	printf("\nThe saved amount is : %lf", dis_amt);
	printf("\nThe amount after discount : %lf", amt_after_dis);
	printf("\nYOUR ORIGINAL AMOUNT IS : %d", amt_before_dis);
	
}
	else if(amt_before_dis>4000 && amt_before_dis<=6000){
	dis_amt = (float)amt_before_dis*(30.0/100);
	amt_after_dis = amt_before_dis - dis_amt;
	printf("\nThe saved amount is : %lf", dis_amt);
	printf("\nThe amount after discount : %lf", amt_after_dis);
	printf("\nYOUR ORIGINAL AMOUNT IS : %d", amt_before_dis);
	}
	else if(amt_before_dis>6000){	
	dis_amt = (float)amt_before_dis*(50.0/100);
	amt_after_dis = amt_before_dis - dis_amt;
	printf("\nThe saved amount is : %lf", dis_amt);
	printf("\nThe amount after discount : %lf", amt_after_dis);
	printf("\nYOUR ORIGINAL AMOUNT was : %d", amt_before_dis);
	}


	return 0;

}