#include<stdio.h>
int main()
{
	int age;
	printf("enter your age : ");
	scanf("%d",&age);
	if (age>=18)
	printf("you are eligible for vote ");
	else
	printf("you are not eligible for vote  ");
	if (age<18)
	printf("you are allowed to vote after %d",18-age);
	return 0;
}
