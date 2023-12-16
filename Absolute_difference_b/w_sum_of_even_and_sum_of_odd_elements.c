#include <stdio.h>
#include <limits.h>
int main()
{
	int n,i;
	int sum=0,k=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
for(i=0;i<n;i++)
{
	if(arr[i]%2==0)
	{
	    sum=sum+arr[i];
	}
	else if(arr[i]%2!=0)
	{
	    k=k+arr[i];
	}
	else
	{
	    printf("ntg");
	}
}
  if(k>sum)
  {
      printf("%d",k-sum);
  }
  else
  {
      printf("%d",sum-k);
  }
	}