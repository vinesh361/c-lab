#include<stdio.h>
main()
{
	int i,n,r,tv;
	printf("enter the values: ");
	
	scanf("%d",&n);
	scanf("%d",&tv);
	for(i=1;i<=n;++i)
	{
		r=i*tv;
		printf("%d*%d=%d \n",i,r,tv);
	}
	return 0;
}
