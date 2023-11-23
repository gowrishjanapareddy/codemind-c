#include <stdio.h>
int main()
{
    int i,m=0,a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0)
        {
           m=m+1;
          
        }
                      
    }
              printf("%d",m);   
}