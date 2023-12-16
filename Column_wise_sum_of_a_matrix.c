#include<stdio.h>
int main()
{
	int r,c,i,j;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	
	for(j=0;j<c;j++)
	{int cs=0;
		for(i=0;i<r;i++)
		{
			cs=cs+arr[i][j];
			
		}
		printf("%d ",cs);
		

		
}
}