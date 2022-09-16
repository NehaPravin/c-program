#include<stdio.h>
int main()
{
	int n,m=1,i;
	printf("enter your no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	m=m*i;
	}
	printf("factorail is %d",m);
}
