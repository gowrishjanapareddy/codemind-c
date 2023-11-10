#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,a,c=0;
	scanf("%d",&n);
    a=n;
	for(i=2;i<=sqrt(n);i++)
	{
		if(a%i==0)
		{
		     c++;
		}
	}
		if(c==0)
		{
			printf("Prime");
		}
		else
		{
			printf("Not Prime");
		}
	}
