#include<stdio.h>
int main()

{
	int a;
	int b;
	
	printf("Enter First Number\n");
	scanf("%d",&a);
	printf("Enter Second Number\n");
	scanf("%d",&b);
	
	if(a==b)
	{
		printf("\n%d %d are same number",a,b);
	}
	else
	{
		printf("\n%d %d are not same number",a,b);
	}
	return 0;
}
