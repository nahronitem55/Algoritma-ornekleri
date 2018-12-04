#include<stdio.h>
#include<conio.h>

char sifre[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','V','T','U','Y','Z','Q','W','X'};

int kod(){

FILE *dosya=fopen("belge.txt","w");

int i,j,m,l;
for(i=0;i<26;i++)
{
	
	for(j=0;j<26;j++)
	
	{
		for( l=0;l<26;l++)
		{
			for( m=0;m< 26;m++)
			{
				
				fprintf(dosya,"%c%c%c%c\n",sifre[i],sifre[j],sifre[l],sifre[m]);
				printf("%c%c%c%c\n",sifre[i],sifre[j],sifre[l],sifre[m]);
			}
		}
	}

}
fclose(dosya);

}












int main()
{
	kod();
	getch();
return 0;	
}
