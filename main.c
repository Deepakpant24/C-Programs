#include <stdio.h>
 int main()
 {
 	int bill,received,returned;
 	printf("Enter the bill amount : ");
 	scanf("%d",&bill);
 	printf("Enter the received amount : ");
 	scanf("%d",&recieved);
 	returned=received-bill;
  int array[10]={2000,500,200,100,50,20,10,5,2,1};
  for(int i=0;i<10;i++)
  { 
   int temp=returned;
   printf("%d",temp);
   returned=returned%a[i];
  }
  return 0;
 }
