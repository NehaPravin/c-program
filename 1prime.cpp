#include<stdio.h>
int main()
{
	int n, i,m;
	printf("entr a no");
	scanf("%d", &n);
	for(i=n-1;i>1;i--)
	{
		m=n%i;
		if(m==0)
		break;
	}
	if(m==0)
	printf("n0t prime",m);
	else
	printf("prime",m);
}
