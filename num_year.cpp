#include<stdio.h>

int main()

{
	int a;
	int b;
	int c;
	int d;
	printf("Enter Number\n");
	scanf("\n%d",&a);
	
	b=a/365;
	c=(a-b*365)/30;
	d=(a-b*365-c*30);
	printf("\nYear %d",b);
	printf("\nMonth %d",c);
	printf("\nDay %d",d);
	return 0;
}
