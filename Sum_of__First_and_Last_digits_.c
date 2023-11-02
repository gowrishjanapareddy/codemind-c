#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y=x%10;
    for(;x>=9;)
    {
        x=x/10;
    }
    printf("%d",x+y);
}