#include<stdio.h>
main()
{
	int i,n,r,tv;
	printf("enter the values :");
	scanf("%d",&tv);
	for(i=1;i<=10;++i)
	{
		r=i*tv;
		printf("%d*%d=%d \n",tv,i,r);
	}
	return 0;
}
