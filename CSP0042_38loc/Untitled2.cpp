
#include<stdio.h>
#define max 100 
void inputArray(int a[], int &n){
   //int flag = 0;
   int b;
  // do{
		for (int i = 0; i < max; i++){ 
			scanf("%d", &b);
			if(b != 0){
				a[i] = b;
				n++;
			}
			if(b == 0){
				//flag = 1; 
				i = max;	
 			}
		}
	//}while (flag == 0);
}	
 

void printArray(int a[], int &n){
    for(int i = 0;i < n; ++i){
        printf("%4d", a[i]);	
    }
}


void maxValue(int a[], int n){
	int Max = a[0];
	for (int i = 0; i < n; i++){
		if(Max < a[i]){
			Max = a[i];	
		}
	}
	printf ("\nArray maximum value:\n");
	printf ("The maximum is %d",Max);
}

void evenValue(int a[], int n){
	int i;
	for (int i = 0; i < n; i ++){
		if	(a[i] % 2 == 0){
			printf("%4d",a[i]);
			}
	}
}
 
int main (){
	int n;
	int a[max]; 
	printf("Enter the element of the array \n");
	inputArray(a,n);
	printf("array element:\n");
	printArray(a,n);
	maxValue(a,n);
	printf("\narray even value:\n");
	evenValue(a,n);
getchar();
return 0;
}

