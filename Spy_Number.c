#include <stdio.h>
int main()
{
    int n,i,r,m=1,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        m=m*r;
        n=n/10;
    }
        if(m==sum)
        {
            printf("Spy Number");
        }
        else
        {
            printf("Not Spy Number");
        }
    }
    