#include<stdio.h>

main()

{
	int i,k;
	
	printf("Enter Number");
	scanf("%d",&k);
	
	for(i=1;i<=10;i++)
	
	printf("\n%d*%d=%d",k,i,k*i);
	
	return 0;
}

