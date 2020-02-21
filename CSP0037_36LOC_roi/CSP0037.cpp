#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#define maxAscii 255
#define minAscii 0
int enterNumber(){
	int n;
	do
	{
		printf("Please enter a positive integer number n = ");
		scanf("%d",&n);
		fflush(stdin);
	}while(n<0);
	return n;
}
int checkSquareNumber(int n)
{	float i;
	if (n>=0)
	{
		i=n;
		i=sqrt(n);
		n=sqrt(n);
		if (n==i) 
		{	return 1;
		}
		else 
		{
			return 2;
		}
	}
}
int main()
{	int n;
	int i;
	char keyPress;
	do
	{
		n=enterNumber();
		i=checkSquareNumber(n);
		if (i==1)
		{	i=sqrt(n);
			printf("%d is square number %d = %d x %d \n",n,n,i,i);
		}
		if (i==2)
		{	
			printf("%d is not square number.\n",n);
		}
		printf("Press any key to continue.\n");	
		keyPress = getch();
	}while(keyPress<maxAscii || keyPress > minAscii);	
}

