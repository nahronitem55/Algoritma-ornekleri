#include <stdio.h>
#include <math.h>
main()
{
	float a,b,c,x1,x2,delta;
	char ch='e';
	do
	{
	
	printf("A xkare katsayisi=");scanf("%f",&a);
	printf("B x in katsayisi=");scanf("%f",&b);
	printf("C sabitin katsayisi=");scanf("%f",&c);
	delta=b*b-4*a*c;
	if(delta<0)
	printf("Reel kok yoktur");
	else
	if(delta==0)
	{
		x1=x2=-b/2*a;
		printf("Kokler esit x1=x2=%.2f",x1);
	}
	else
	{
		x1=(-b+sqrt(delta))/2*a;
		x2=(-b-sqrt(delta))/2*a;
		printf("x1=%.2f \t x2=%.2f",x1,x2);
		
	}
	printf("\nDevam edecekmisiniz? 'e' / 'h'");scanf("%c",&ch);
	ch=getchar();
	}
	while(ch=='e');
}

