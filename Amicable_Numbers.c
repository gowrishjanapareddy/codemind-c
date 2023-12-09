#include <stdio.h>
int main()
{
    int i,n,j,a,sum=0,s=0;
    scanf("%d",&n);
    scanf("%d",&a);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
    {
        sum=sum+i;
    }
    }
    for(j=1;j<a;j++)
    {
        if(a%j==0)
    {
        s=s+j;
    }
    }
    if(sum==a && s==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}