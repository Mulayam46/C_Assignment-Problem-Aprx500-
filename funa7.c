#include<stdio.h>
int func(int x,int y);
int main()
{
    int p=func(5,6);
    printf("%d",p);
    return 0;
}
int func(int m,int y)
{
    int x=2;
    return x*y;
}
