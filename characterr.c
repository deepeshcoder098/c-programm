#include<stdio.h>
int main()
{
char ch;
printf("enter a charcter");
scanf("%c",&ch);
if(isalpha(ch))
{
	printf("%c is alphabet",ch);
}
else {
		printf("%c is not alphabet",ch);
}
return 0;
}
