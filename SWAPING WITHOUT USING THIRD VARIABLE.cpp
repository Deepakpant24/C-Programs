#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a:-");
	scanf("%d",&a);
	printf("Enter b:-");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf(" a after swaping:-%d\n",a);
	printf(" b after swaping:-%d",b);
	return 0;
}
