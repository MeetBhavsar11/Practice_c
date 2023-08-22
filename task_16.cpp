#include<stdio.h>

int main()

{
	int a;
	int b;
	int c;
	int total;
	int per;
	
	printf("Enter first subject mark\n");
	scanf("%d",&a);
	
	printf("Enter Second subject mark\n");
	scanf("%d",&b);
	
	printf("Enter third subject mark\n");
	scanf("%d",&c);
	
	total=a+b+c;
	
	printf("Total marks is =%d",total);
	
	per=total*100/300;
	printf("\npercentage = %d",per);
	
	return 0;
	
	
}
