#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        for(k=a-i;k>=1;k--)
        {
            printf("*");
        }
        printf("
");
    }
}