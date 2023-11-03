#include <stdio.h>
int main()
{
	int i,n,e;
	scanf("%d%d%d",&n,&e);
	for(i=1;i<=e;i++)
	{
		printf("%d x %d = %d
",n,i,n*i);
	}
}