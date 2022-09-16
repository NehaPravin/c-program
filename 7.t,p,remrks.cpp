#include<stdio.h>
int main()
{
	int e,m,s;
	float T=0,P;
	printf("enter the marks of each subject:");
	scanf("%d\t %d\t %d\t",&e,&m,&s);
	T=e+m+s;
	P=T/3;
	if(P>60)
	printf("good");
	else
	 printf("poor result");
	printf("total is %f",T);
	printf("percent is %f",P);

}
