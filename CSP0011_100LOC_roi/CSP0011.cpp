#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<conio.h>
#define max 20
#define enter 13
#define esc 27
int binary(){
	char s[max];
	int count;
	int result=0;
	int i;
	do
	{
		printf("Enter binary number: ");
		scanf("%s",&s);
		fflush(stdin);
		for(i=0;i<strlen(s);i++)
		{	if(s[i]>='0' && s[i] <= '1' )
			{	count=1;
			}
			else {
				count=0;
				i=strlen(s);
			}	
		}
	} while(count==0 || strlen(s)>max);	
	for(i=0;i<strlen(s);i++)
	{		
		if(s[i]=='1')
		{	result = result + pow(2,strlen(s)-i-1); 
		}
	}
	return result;
	
}
int octal(){
	char s[max];
	int i;
	int count;
	int result;
	do{
		printf("Enter the octal number: ");
		scanf("%s",&s);
		for (i=0;i<strlen(s);i++)
		{	if (s[i]>='0' && s[i]<='7')
			{	
				count=1;					
			}
			else {
				count=0;
				i=strlen(s);
			}				
		}	
	} while(count==0 || strlen(s)>max);
	for(i=0;i<strlen(s);i++)
	{	
		if(s[i]=='1')
		{	result += 1*pow(8,strlen(s)-i-1);
		}
		if(s[i]=='2')
		{	result += 2*pow(8,strlen(s)-i-1);
		}
		if(s[i]=='3')
		{	result += 3*pow(8,strlen(s)-i-1);
		}
		if(s[i]=='4')
		{	result += 4*pow(8,strlen(s)-i-1);
		}
		if(s[i]=='5')
		{	result += 5*pow(8,strlen(s)-i-1);
		}
		if(s[i]=='6')
		{	result += 6*pow(8,strlen(s)-i-1);
		}
		if(s[i]=='7')
		{	result += 7*pow(8,strlen(s)-i-1);
		}
	}
	return result;
	
}
int hexa(){
	char s[max];
	int i;
	int count;
	int result;
	do{
		printf("Enter the hexadecima number: ");
		scanf("%s",&s);
		strupr(s);
		for (i=0;i<strlen(s);i++)
		{	if (s[i]>='0' && s[i]<='9' || s[i]>='A' && s[i]<='F')
			{	
				count=1;					
			}
			else {
				count=0;
				i=strlen(s);
			}				
		}	
	} while(count==0 || strlen(s)>max);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='1')
		{	
			result += 1*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='2')
		{	
			result += 2*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='3')
		{	
			result += 3*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='4')
		{	
			result += 4*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='5')
		{	
			result += 5*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='6')
		{	
			result += 6*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='7')
		{	
			result += 7*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='8')
		{	
			result += 8*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='9')
		{	
			result += 9*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='A')
		{	
			result += 10*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='B')
		{	
			result += 11*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='C')
		{	
			result += 12*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='D')
		{	
			result += 13*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='E')
		{	
			result += 14*pow(16,strlen(s)-i-1);
		}
		if(s[i]=='F')
		{	
			result += 15*pow(16,strlen(s)-i-1);
		}
	}
	return result;
	
		
}
int main(){
	int count;
	char c;
	int flag=0;
	int n;
	int result;
	do{
		printf("1.	Convert binary number to decimal number.\n");
		printf("2.	Convert octal number to decimal number.\n");
		printf("3.	Convert hexadecimal number to decimal number.\n");
		printf("4.	Exit.\n");
		do
		{
			printf("Please choose number (1 - 4):");
			count=scanf("%d",&n);
			fflush(stdin);
		} while(count==0 || n<1 || n>4);
		switch(n)
		{
			case 1: result = binary();
					printf("Decimal number is: %d\n",result);
					break;
			case 2: result = octal();
					printf("Decimal number is: %d\n",result);
					break;
			case 3: result = hexa();
					printf("Decimal number is: %d\n",result);
					break;
			case 4: flag=1;
			default:	;
		}
		if(n<4)
		{
			printf("Press enter to continue, Esc to return the main menu.\n");
			c = getch();
			if(c==enter)
			{	system("cls");
				flag=0;
			}
			if(c==esc)
			{	flag=1;
			}
		}
	} while(flag==0);
}
