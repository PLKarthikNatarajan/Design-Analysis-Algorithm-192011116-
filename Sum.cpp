#include<stdio.h>
int main()
{
  int a,rem,sum=0;
  printf("Enter num:");
  scanf("%d",&a);
  while(a!=0){
     rem=a%10;
     sum+=rem;
     a=a/10;
  }
  printf("Sum of the digits is:%d",sum);
  return 0;	
}
