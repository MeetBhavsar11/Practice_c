#include<stdio.h>
int main()

{
	char z;
	
	printf("Enter Alphabet\n");
	scanf("%c",&z);
	
	if(z=='a'|| z=='e'||z=='i'||z=='o'||z=='u')
	{
		printf("\n%c is vowel",z);
	}
	else
	{
		printf("\n%c is consonant",z);
	}
	return 0;
}
