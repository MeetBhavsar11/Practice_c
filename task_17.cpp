#include<stdio.h>

int main()

{
	int day;
	int present;
	int total;
	
	printf("Enter Daily Salary\n");
	scanf("%d",&day);
	
	printf("Enter Present day\n");
	scanf("%d",&present);
	
	total=day*present;
	
	printf("Total salary is=%d",total);
	return 0;
}
