#include<stdio.h>
int main()
{
	int a,b;
	a=80;
	b=10;
	printf("%d\t %d\t",a,b);
	printf("\n swap wdout using other variable \n");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d\t %d\t",a,b);
}
