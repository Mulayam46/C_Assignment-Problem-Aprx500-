#include<stdio.h>
int fact (int n);
int main()
{
   int a;
   scanf("%d",&a);
   printf("fact is %d",fact(a));
}
int fact(int n)
{
   if(n==1)
      return 1;
  return  n*fact(n-1);
}
