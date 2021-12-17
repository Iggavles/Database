#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
	int x,y,risultato;
	if(argc<3)
	{
		printf("Non hai passato abbastanza variabili");
		exit(-1);
	}
	x=atoi(argv[1]);
	y=atoi(argv[2]);
	if(x==NULL || y==NULL)
	{
		printf("Rincontrolla le variabili date");
		exit(-2);
	}
	risultato=quiz(x,y);
	printf("Il risultato della divisione e' %x",risultato);
}
int quiz(int x, int y)
{
	int r;
	if(x<0)
	{
		x= -x;
	}
	if(y<0)
	{
		y= -y;
	}
	while(y)
	{
		r=x % y;
		x=y;
		y=r;
	}
	return x;
}
