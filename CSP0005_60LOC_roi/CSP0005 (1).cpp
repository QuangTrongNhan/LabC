#include<stdio.h>
#include<conio.h>
int enterNumber ()
{	int n;
	do
	{
		printf("Enter number : ");
		scanf("%d",&n);
		if(n<1 || n>9)
		{	
			printf("Error\n");
		}
	}while(n<1 || n>9);
}
void multiplication (int n){
	int i;
	for(i=1;i<11;i++)
	{	printf("%d x %d = %d\n",n,i,n*i);
	}
	
}
int main (){
	int n;
	char keyPress;
	do
	{
		n = enterNumber();
		multiplication(n);
		printf("Press any key to continue, ESC  to exit.\n");
		keyPress = getch();
	}	while(keyPress != 27);
	getchar();
	return 0;
	
}
