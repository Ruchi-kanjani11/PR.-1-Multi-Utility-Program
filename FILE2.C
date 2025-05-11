#include<stdio.h>
#include<conio.h>
int main()
{
	int hra,basic,da,ta,r;
	clrscr();
	printf("enter your basic:");
	scanf("%d",&basic);
	printf("enter your hra:");
	scanf("%d",&hra);
	printf("enter your da:");
	scanf("%d",&da);
	printf("enter your ta:");
	scanf("%d",&ta);
	r=(basic+hra+ta+da);
	printf("your ans is: Rs.%d",r);
	getch();
	}