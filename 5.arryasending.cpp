#include<stdio.h>
int main()
{
	int a[20],i,j,n,temp;
	printf("enter the array elemet");
	scanf("%d\t",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("no. before sorting are:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
	}
	printf("\n nos in asending order are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

