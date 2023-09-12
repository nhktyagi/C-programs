#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("Enter the value in kilometer ");
	scanf("%d",&a);
	b=a*1000;
	c=a*100000;
	d=a*10000000;
	printf("The value in kilometers is %d",a);
	printf("\nThe value in meters is %d",b);
	printf("\nThe value in centimeters is %d",c);
	printf("\nThe value in millimeters is %d",d);
	
}
