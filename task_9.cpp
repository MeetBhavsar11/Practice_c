#include<stdio.h>

int main()

{
	int i=1;
	
	mylab:
		
	for(;i<=10;i++)

	{
		if(i==7)
		{
			i++;
			printf("Hello\n");
			goto mylab;
		}
		printf("%d\n",i);
	}
	
	
	
	return 0;
}
