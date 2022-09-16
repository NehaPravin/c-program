#include<stdio.h>
int main()
{
	int cp,sp,P=0,L=0;
	printf("enter the selling price:");
	scanf("%d",&sp);
	printf("enter the cost price:");
	scanf("%d",&cp);
	if(sp>cp)
	{
	P=sp-cp;
	printf("profit is %d",P);
	}
	else
	{
	
	L=cp-sp;
	printf("loss is %d",L);
	}
}
