#include<stdio.h>
int main()
{
	int a,b,c,d,e,t,p;
	printf("Enter the marks for subject1 out of 100 ");
	scanf("%d",&a);
	printf("Enter the marks for subject2 out of 100 ");
	scanf("%d",&b);
	printf("Enter the marks for subject3 out of 100 ");
	scanf("%d",&c);
	printf("Enter the marks for subject4 out of 100 ");
	scanf("%d",&d);
	printf("Enter the marks for subject5 out of 100 ");
	scanf("%d",&e); 
	t=a+b+c+d+e;
	p=t/5;
	printf("The percentage of student is %d%%",p);
	
}
