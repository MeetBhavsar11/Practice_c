#include<stdio.h>

int main()

{
	int length;
	int width;
	int area;
	
	printf("Enter length\n");
	scanf("%d",&length);
	
	printf("Enter width\n");
	scanf("%d",&width);
	
	area=length*width;
	
	printf("Area is=%d",area);
	return 0;
}
