int main()
{
   int n,i,count=0,rem;
   printf("enter a number");
   scanf("%d",&n);
   while(n)
   {
      rem=n%10;
      printf("%d",rem);
      n=n/10;
   }
}

