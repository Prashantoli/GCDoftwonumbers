#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a , b,r;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf(" the gcd of two number is:%d\n",a);
	return 0;
}