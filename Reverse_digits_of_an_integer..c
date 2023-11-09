#include <stdio.h>
int main()
{
    int r=0,re,n;
    scanf("%d",&n);
     
   while(n!=0)
 
{
    re=n%10;
    r=r*10+re;
    n/=10;
}

    printf("%d",r);

    }