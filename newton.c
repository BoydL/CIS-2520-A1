#include <stdio.h>
#include <stdlib.h>
void NewtonRec(int x, double e, double a);/*Find the square roots of the inputed numbers recursively and none recursively respectively.*/
void NewtonNoneRec(int x, double e, double a);

void NewtonRec(int x, double e, double a)
{
	if(abs(a*a-x)<=e)
	{
		printf("Sqrt of %d: %f\nDeviation of :%f\n",x , a, e);
	}
	else
	{
		NewtonRec(x,e,(((a+x)/a)/2));
	}
}

void NewtonNoneRec(int x, double e, double a)
{
	int check=1;
	do
	{
		if(abs(a*a-x)<=e)
		{
			check=0;
		}
		else
		{
			a = ((a+x)/a)/2;
			check=1;
		}	
	}while(check!=0);
	printf("Sqrt of %d: %f\nDeviation of: %f\n",x , a, e);
}
