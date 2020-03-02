#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
#include<conio.h>
#define ESC 27
void count(char s[]){
	char i;
	char j;
	int count=0;
	for(i='a';i<='z';i++)
	{	
		for(j=0;j<strlen(s);j++)
		{	
			if(i==s[j]) count++;
		}
		if (count>0)
		{	
			printf("%c : %d\n",i,count);
		}
		count=0;
	}
}
int main(){
	char s[max];
	char key;
	int flag=0;
	int n;
	do
	{
		printf("Enter a string : ");
		gets(s);
		n=strlen(s);
		if(n>0) 
		{	flag=1;
		}
		strlwr(s);
		count(s);
		printf("\n1.Please press any key board to continue\n");
		printf("2.Please press ESC to exit program\n");
	  	printf ("==============||=============\n");
	  	key = getch ();
	}while (key != ESC);
	getchar();
}
