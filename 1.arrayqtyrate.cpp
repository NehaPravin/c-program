#include<stdio.h>
int main()
{
	int stock[5],price[5],T=0,i,n;
	printf("enter the no of array's");
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the no of stock=%d \n",i+1);
	scanf("%d",&stock[i]);
			printf("enter the no of price=%d \n",i+1);
		scanf("%d",&price[i]);
	}
	for(i=0;i<n;i++)
	{
	T=T+(stock[i]*price[i])	;
	}

	printf("total is %d",T);
	}
