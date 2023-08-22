#include<stdio.h>
int main()

{
	int a;
	
	printf("Enter Number\n");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("%d is Possitive Number",a);
	}
	else if(a<0)
	{
		printf("%d is Nagetive Number",a);
	}
	else
	{
		printf("Invalid Input");
	}
	    return 0;
}
