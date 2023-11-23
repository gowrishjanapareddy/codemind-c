#include <stdio.h>
int main()
{
    int i,a,b,m=1,g,l;
    scanf("%d%d",&a,&b);
    for(i=1;i<=9;i++)
    {
        if(a%i==0 && b%i==0)
        {
         g=i;
        }
        l=(a*b)/g;
    }
    printf("%d",l);
}