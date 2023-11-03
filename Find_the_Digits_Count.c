#include <stdio.h>
int main()
{
	int n,m=0;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		m=m+1;
	}
	printf("%d",m);
}