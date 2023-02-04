#include <stdio.h>
int main(){
    int n;
	printf("enter a year of four: ");
	scanf("%d",&n);
	if(n%400==0&&n%100==0&&n%4==0)
	{ printf("that's a leap year");
	}
	else if(n%4==0&&n%100!=0) {
	 printf("it  a leap year");
	}
	else {
		printf("it is not a leap year");
	}
return 0;
}
