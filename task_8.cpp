#include<stdio.h>

int main()
{

	int arr[10],even=0,odd=0;
	printf("Enter the value\n");
	for(int i = 0 ; i<10 ; i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2 == 0)
		{
			even = even+1;
		}
		else
		{
			odd = odd+1;
		}
	}
	printf("\nOdd number is : %d\n",+odd);
	printf("\nEven number is : %d\n",+even);

	return 0;

}
