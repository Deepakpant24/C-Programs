#include <stdio.h>
int main()
{
	int i,n,sum=0,avg;
	printf("Enter  the number:");
	scanf("%d",&n);
	int a[n];
	printf("Input the  value:");
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
	avg=sum/n;
	printf("Sum of Numbers=%d \n",sum);
	printf("Average of Number=%d",avg);
return 0;

}
