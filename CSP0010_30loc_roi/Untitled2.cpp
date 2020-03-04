#include<stdio.h>
#define max 100
void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("element[%d]: ",i);
		scanf ("%d",&a[i]);	
	}
}

void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("%4d",a[i]);	
	}
}

void xoa(int a[], int &n, int vitri){
	for(int i = vitri + 1; i < n; i++){
		a[i - 1] = a[i];	
	}
	n--;
}

void xoaPhanTuTrung(int a[], int &n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]){
				xoa(a,n,j);
				i--;
			}		
		}
	}
}
  
int main (){
	int a[max];
	int n;
	printf("Please enter size of array: ");
	scanf("%d",&n);
	nhap(a,n);
	printf("the original array:\n");
	xuat(a,n);
	xoaPhanTuTrung(a,n);
	printf("\nThe array after removing duplicate elements: \n");
	xuat(a,n);
	getchar();
	return 0;
}

