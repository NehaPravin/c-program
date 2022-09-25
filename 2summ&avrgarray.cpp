#include<stdio.h>
int main()
{
	int a[5],i,s=0,avg;
printf("enter 5 marks:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("marks of 5 sub are: \n");
		for(i=0;i<5;i++)
		{
			printf("a[%d]=%d \n",i,a[i]);
			
		}
		printf("sum is %d \n",s);
		avg=s/5;
		printf("average is %d \n",avg);
}
