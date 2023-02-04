#include<stdio.h>
int  area();
int square();
int rectangle();
int triangle();
int circle();
int main()
{
	int a;
	area();
	}

int area()
{
	int a;
	printf("Choose the shape-\n1. Square\n2. Rectangle\n3. Triangle\n4. Circle");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
			square();
		break;
		case 2:
			rectangle();
		break;
		case 3:
			triangle();
		break;
		case 4:
			circle();
		break;
	}
}
int square()
{
	int a,area;
	printf("Enter any side length: ");
	scanf("%d", &a);
	area=a*a;
	printf("Area of Square= %d",area);
}
int rectangle()
{
	int a,b,area;
	printf("Enter length: ");
	scanf("%d", &a);
	printf("Enter breadth: ");
	scanf("%d", &b);
	area=a*b;
	printf("Area of Rectangle= %d",area);
}
int triangle()
{
	int a,b,area;
	printf("Enter height: ");
	scanf("%d", &a);
	printf("Enter base: ");
	scanf("%d", &b);
	area=a*b/2;
	printf("Area of Triangle= %d",area);
}
int circle()
{
	int r;
	double area;
	printf("Enter the radius: ");
	scanf("%d", &r);
	area=3.14*r*r;
	printf("Area of Circle= %f",area);
}
