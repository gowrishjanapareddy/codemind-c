#include <stdio.h>
#include <math.h>
int main()
{
    int n,r,sum=0,z,t;
    scanf("%d",&n);
    t=pow(n,2);
    while(t>0)
    {
        r=t%10;
        sum=sum+r;
        t=t/10;
    }
    if(sum==n)
    printf("Neon Number");
else
    printf("Not Neon Number");
}