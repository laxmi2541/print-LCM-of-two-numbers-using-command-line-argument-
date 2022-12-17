#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int a,b,x,y,rem,l;
	if(argc!=3)
	{
		printf("Either few arguments or two many arguments");
	} 
	else
	{
		a=atoi(argv[1]);
		b=atoi(argv[2]);
		x=a;
		y=b;
		while(b!=0)
		{
			rem=a%b;
			a=b;
			b=rem;
		}
		l=x*y/a;
		printf("LCM of %d%d is %d",x,y,l);
		return 0;
		}
}
