#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
           scanf("%d",&arr[i]);
    }
    int s,z=0;
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {  
        if(s==arr[i])
            {
               z++;
            }
    }
     printf("%d",z);
    
}