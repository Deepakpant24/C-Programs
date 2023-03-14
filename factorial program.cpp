#include<stdio.h>
int main()
{
	int num,rem,bin=0,i=1;
	printf("Enter a decimal number:-");
	scanf("%d",&num);
	while(num!=0)
	{	 
	rem=num%2;    
	bin=rem*i+bin;
	i=i*10;
	num=num/2;
	  }
	  printf("Decimal value of binary number = %d",bin);
	  return 0;
}
