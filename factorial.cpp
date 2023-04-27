#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("enter the num:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	  {
	  	fact*=i;
	  }
	printf("factorial of num is:%d",fact);
	return 0;  
}
