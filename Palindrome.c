#include <stdio.h>
int main()
{
    int r=0,re,n,a;
    scanf("%d",&n);
     a=n;
   while(n!=0)
 
{
    re=n%10;
    r=r*10+re;
    n/=10;
}
if(a==r)
{
    printf("Palindrome");
}
else 
{
    printf("Not Palindrome");
}
    }
