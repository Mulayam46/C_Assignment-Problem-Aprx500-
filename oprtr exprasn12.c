#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,k;
    a=8,b=3,c=2,d=3,e=2,f=11;
    printf("%d",a-b||(a-b*c)+d&&e-f%3);
    return 0;
}
