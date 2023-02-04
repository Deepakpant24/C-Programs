#include<stdio.h>
int swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nafter swap a=%d\n",a);
	printf("after swap b=%d",b);
return 0;
}
int main()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	printf("\n a before swap=%d\n",a);
	printf("b before swap=%d\n",b);
swap(a,b);
return 0;
}
