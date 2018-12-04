#include <stdio.h>
main()
{
	int i,j,n,k;
	do
	{
		printf("1..10 arasi deger girin=");scanf("%d",&n);
	}
	while(n<=0 || n>10);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		printf(" ");
		
		for(j=1;j<=2*i-1;j++)
		printf("*");
		printf("\n");
	}
		
	for(i=n-1;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
		printf(" ");
		
		for(j=1;j<=2*i-1;j++)
		printf("*");
		
		printf("\n");
	}
	
	
}
