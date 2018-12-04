#include <stdio.h>
main()
{
	int x1=1,x2=1,x,n,i;
	printf("n=");scanf("%d",&n);
	printf("%d %d",x1,x2);
	for(i=3;i<=n;i++)
	{
	x=x1+x2;
	x1=x2;
	x2=x;
	printf(" %d",x);
	}
	
	
}
