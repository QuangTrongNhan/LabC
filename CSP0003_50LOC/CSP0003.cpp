#include<stdio.h>
#define max 100
#include<stdlib.h>
#include<conio.h>
#define ESC 27
void themMang(int a[], int &n){
	int i;
	char count;
	do{
		printf("\nPlese enter size of array: ");
		count = scanf("%d",&n);		
	}while(n >= max || n < 1 || count == 0);
	for (i = 0; i < n; i++)
	{	do{
			printf("Enter element [%d] =",i);
			count = scanf("%d",&a[i]);
		}while(count == 0);
	}
}
void printArray(int a[],int n){
	for(int i = 0; i < n; i++)
	{	printf("  %4d",a[i]);
	}
}
void swap(int &x,int &y){
	int temp = x;
    x = y;
    y = temp;
}
void sapXepMang(int a[],int n){
	int i,j;
	for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}
void themPhanTu(int a[],int &n){
	int b,count;
	int i,j;
	n+=1;
	do
	{
		printf("Please enter new value: ");
		count = scanf("%d",&b);
	}while(count == 0);
	a[n-1]=b;
	sapXepMang(a,n);
}
int main(){
	int n;
	char key;
	do{
	int a[max];
	themMang(a,n);
	sapXepMang(a,n);
	printf("The array after sorting: \n");
	printArray(a,n);
	printf("\n");
	themPhanTu(a,n);
	printf("New array:\n");
	printArray(a,n);
	printf("\n1.Please press any key board to continue\n");
	printf("2.Please press ESC to exit program\n");
	printf ("==============||=============\n");
	key = getch ();
	}while(key != ESC);
	getchar();
}
