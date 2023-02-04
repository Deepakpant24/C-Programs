#include<stdio.h>
int main()
{
	int n,m,in;
	printf("enter your income:-");
	scanf("%d",&in);
	if(in<=250000)
      {
      	n=in*0/100;
     printf(" Tax of income :- %d",n);
	  }
	  else if( in>250000&&in<=500000)
	  {
	  	in=in-250000;
	  	n=in*5/100;
      	printf(" Tax of income :- %d",n);
	  }
	  else if(in>500000&&in<=750000)
	  {
	  	in=in-500000;
	  	n= 12500+in*10/100;
      	printf(" Tax of income :- %d",n);
	  }
	   else if(in>750000&&in<=1000000)
	  {
	  	in=in-750000;
	  	n=37500+in*15/100;
      	printf(" Tax of income :- %d",n);
	  }
	   else if(in>1000000&&in<=1250000)
	  {
	  	in=in-1000000;
	  	n=75000+in*20/100;
      	printf(" Tax of income :- %d",n);
	  }
	   else if(in>1250000&&in<=1500000)
	  {
	  	in=in-1250000;
	  	n=125000+in*25/100;
      	printf(" Tax of income :- %d",n);
	  }
	   else
	  {
	  	in=in-1500000;
	  	n=187500+in*30/100;
      	printf(" Tax of income :- %d",n);
	  }
	   
}
