#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,t,n,a,b,c,i,d;
	printf("1 Simple Interest \n 2 Compound Interest \n");
	scanf("%d",&a);
	if (a==1)
	{
		printf("Enter the principal amount");
		scanf("%d",&p);
		printf("\nEnter the rate of interest");
		scanf("%d",&r);
		printf("\nEnter the number of years");
		scanf("%d",&t);
		i=(p*r*t)/100;
		printf("The simple interest is %d",i);
   }
	else
	{
		printf("Enter the principal amount");
		scanf("%d",&p);
		printf("\nEnter the annual year rate");
		scanf("%d",&r);
		printf("\nEnter the number of compounding periods a year");
		scanf("%d",&n);
		printf("\nEnter the number of years");
		scanf("%d",&t);
		b=n*t;
		c=1+r/n;
		d=pow(b,c);
		i=p*d;
		printf("The compound interest is %d",i);
   }
}
