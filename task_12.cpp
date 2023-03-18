#include<stdio.h>

int add();
int main()

{
	printf("\n---------Welcome---------\n");
	
	printf("\n Addition : %d",add());
	
	return 0;
}
   
int add()

  {
	int l,m;
	
	printf("Enter two Numbers :");
	scanf("%d %d",&l,&m);
	
	return l+m;
  }
