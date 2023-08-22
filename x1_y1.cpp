#include<stdio.h>

int main()

{
	int x1;
	int x2;
	int y1;
	int y2;
	int a;
	
	printf("Enter value of x1 :");
	scanf("\n%d",&x1);
	
	printf("Enter value of x2 :");
	scanf("\n%d",&x2);
	
	printf("Enter value of y1 :");
	scanf("\n%d",&y1);
	
	printf("Enter value of y2 :");
	scanf("\n%d",&y2);
	
	a=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	printf("Answer is %d",a);
	
	return 0;
}
