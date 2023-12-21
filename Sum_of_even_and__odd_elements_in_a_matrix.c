#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int i,j,arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int k=0,s=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]%2==0)
            {
                k=k+arr[i][j];
            }
            else 
            {
                s=s+arr[i][j];
            }
        }
    }
    printf("%d %d",k,s);
    
    
}