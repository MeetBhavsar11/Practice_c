#include<stdio.h>

float mul(float p, float q)

{
	return p*q;
}

int main()

{
	float i,k;
	
	printf("Enter two Numbers :");
	scanf("%f %f",&i,&k);
	
	printf("product: %.2f",mul(i,k));
	
	return 0;
}
