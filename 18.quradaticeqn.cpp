#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,D,x1,x2;  // qurdatic eqn(ax2+bx+c)
					//D=b2-4ac
	printf("enter the value os varibale ");
	scanf("%f %f %f",&a,&b,&c);
	D=(b*b)-4*a*c;
	if(D==0)
	{
	printf("Roots are real and imaginary");		//=-b+-srqr(b2-4ac)/2a
	x1=-b/(2*a);
	x2=-b/(2*a);
	printf("roots1 =%f\t & roots2 =%f\t",x1,x2);
	}
	 else if(D>0)
	{
		printf("Roots are real and different");
		x1=(-b+(sqrt(D)))/(2*a);
		x1=(-b-(sqrt(D)))/(2*a);
		printf("roots1 =%f\t & roots2 =%f\t",x1,x2);
	}
	else
	{
	
	printf("Roots are imaginary");
	}
}
