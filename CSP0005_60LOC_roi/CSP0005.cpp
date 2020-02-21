#include<stdio.h>
#include<conio.h>
#define ESC 27
int checkNumber ()
{	
	int n;
	char m;
	do
	{
		if (n == m){
		scanf ("%c",&m);
		printf ("error");
		else {
		}
		}
		if(n<1 || n>9)
		{	
			printf("Error\n");
		}
	}while(n<1 || n>9);
}
void multiplication (int n){
	int i;
	for(i=1;i<11;i++)
	{	
		printf("%d x %d = %d\n",n,i,n*i);
	}
	
}
int main (){
	int n;
	char keyPress;
	char m;
	do
	{
		m = checkNumber();
		n = checkNumber();
		multiplication(n);
		printf("Press any key to continue, ESC  to exit.\n");
		keyPress = getch();
	}	while(keyPress != ESC);
	getchar();
	return 0;
	
}
