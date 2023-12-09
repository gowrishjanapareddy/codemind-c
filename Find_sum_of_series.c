#include <stdio.h>
int main()
{
    float n,d,sum=0;
    float r;
    scanf("%f",&n);
    for(d=1;d<=n;d++)
    {
        r=(1/d);
        sum=sum+r;
    }
    printf("%.2f",sum);
}