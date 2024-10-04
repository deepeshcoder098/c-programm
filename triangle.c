#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,sum;
	printf("enter the angles");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	printf("the sum of angles are:- %d\n",sum);
	if(sum==180)
	{
		printf("the shape is triangle",sum);
	}
else
{
		printf("the shape is not  triangle");
}
getch();
}
