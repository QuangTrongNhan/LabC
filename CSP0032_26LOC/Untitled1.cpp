
#include<conio.h>
#include<stdio.h>
#define ESC 27
int main(){
	char key;
	do{
    int n;
    int sotachra;
    int s = 0;
    printf("Enter a integer: n=");
    scanf("%d",&n);
    if(n<0){
    	n=n*-1;
    	for(;n!=0;){
	        sotachra = n % 10;
	        s += sotachra;
	        n /= 10;
			}  
    printf("sum digit %d\n",s);
    }else{
			for(;n!=0;){
	        sotachra = n % 10;
	        s += sotachra;
	        n /= 10;
			}  
    printf("sum digit = %d\n",s);
	}
	printf("press any key to continue, press ESC to exit\n");
	key = getch();
	}while (key != ESC);
	getchar();
	return 0;
    }

