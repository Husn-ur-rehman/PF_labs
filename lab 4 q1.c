#include<stdio.h>
int main(void)
{
	char a;
	
	printf("ENTER ANY VALUE: ");
	scanf("%c",& a);
	
	if(a>='A' && a<='Z'){
	printf("\nTHE VALUE IS UPPERCASE");
}	else if(a>='a' && a<='z'){
	printf("\nTHE VALUE IS LOWERCASE ");
}	else if(a>='0' && a<='9'){
	printf("\nTHE VALUE IS A DIGIT ");
}	else{
	printf("IT IS A SPECIAL CHARACTER ");
}
return 0;

}