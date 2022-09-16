#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the no");
	scanf("%d\t%d%\td\t",&a,&b,&c);
	if(a>b && a>c)
	printf("greatest no is %d",a);
	else if(b>a && b>c)
	printf("greatest no is %d",b);
	else
	printf("greatest no is %d",c);
	
}
