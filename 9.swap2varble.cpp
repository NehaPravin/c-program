#include<stdio.h>
int main()
{
	int a,b,temp;
	a=10;
	b=5;
	printf("%d\t %d\t",a,b);
	printf("\n after swap");
	temp=a;
	a=b;
	b=temp;
	printf("\n %d\t %d\t \n",a,b);
}
