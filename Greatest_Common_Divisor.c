#include<stdio.h>
int main()
{
    int a,b,i,g,n;
    scanf("%d%d%d",&a,&b,&n);
    for(i=1;i<=n;i++)
    {
        if(a%i==0 && b%i==0)
        {
            g=i;
        }
    }
    printf("%d",g);
}