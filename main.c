#include <stdio.h>
#include <stdlib.h>
#include "carbon.c"
#include "ackermann.c"
#include "newton.c"
int main()
{
	int choice;
	int m;
	int n;
	int x;
	double a;
	double e;
	do
	{
		printf("Please select one of the following functions. Please enter only numbers\n");
		printf("1.carbon\n2.arkamman\n3.Newton Recursive\n4.Newton non recursive.\n5.Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				Carbon();
				break;
			case 2:
				printf("Enter an M value:\n");
				scanf("%d", &m);
				printf("Enter an N value:\n");
				scanf("%d", &n);
				printf("number returned:%d\n",ackermann(m,n));
				break;
			case 3:
				printf("Enter the number you would like to find the square root of:");
				scanf("%d", &x);
				a = x/2;
				printf("Enter the variance in the square root:");
				scanf("%lf", &e);
				NewtonRec(x,e,a);
				break;
			case 4:
				printf("Enter the number you would like to find the square root of:");
				scanf("%d", &x);
				a = x/2;
				printf("Enter the variance in the square root:");
				scanf("%lf", &e);
				NewtonNoneRec(x,e,a);
				break;
			case 5:
			break;
		}
	}while(choice!=5);
	return(0);
}
