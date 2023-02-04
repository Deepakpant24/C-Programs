#include <stdio.h>
int main(){
int i,j,il,jl;
printf("no of rows:");
scanf("%d",&il);
printf("no of cloumns:");
scanf("%d",&jl);
int a[il][jl];
for(i=0;i<il;i++)
{
	for(j=0;j<jl;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<il;i++)
{
	for(j=0;j<jl;j++)
	{
		printf(" %d ",a[i][j]);
	}
	printf(" \n");
}

	                  
}
