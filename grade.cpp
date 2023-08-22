#include<stdio.h>

int main()

{
	int a,b,c,total,pr;
	
	printf("Enter Maths marks\n");
	scanf("%d",&a);
	
	printf("Enter Science marks\n");
	scanf("%d",&b);
	
	printf("Enter English marks\n");
	scanf("%d",&c);
	
	total=a+b+c;
	printf("Total Marks is %d",total);
	
	pr=total*100/300;
	printf("\nPercentage is %d",pr);
	
	if(pr>80)
	{
		printf("\nGrade = A+");
	}
	else if(pr>70)
	{
		printf("\nGrade = A");
	}
	else if(pr>60)
	{
		printf("\nGrade = B");
	}
	else if(pr>=35)
	{
	    printf("\nResult = Pass");	
	}
	else if(pr<35 && pr>0)
	{
		printf("\nResult = Fail");
	}
	else
	{
		printf("\nInvalid");
	}
	return 0;
}

