#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,r;
	clrscr();
	printf("enter your angle 1:");
	scanf("%d",&a);
	printf("enter your angle 2:");
	scanf("%d",&b);
	r=180-(a+b);
	printf("Third angle is: %d",r);
	getch();
	}