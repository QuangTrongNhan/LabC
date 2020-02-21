#include <stdio.h>
#include<conio.h>
#define ESC 27
#define max 100
void NhapMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%3d", a[i]);
    }
}
 
void TangDan(int a[], int n){
    int tg;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];                                                
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
 
void GiamDan(int a[], int n){
    int tg;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
 
int main(){
	char key;
	do{
	int n;
    int a[max];
    printf("\nNhap so luong phan tu n = ");
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai n ");
        }
    NhapMang(a, n);
    // Sap xep tang dan:
    TangDan(a, n);
    printf("\nThe array sorted in ascending: ");
    XuatMang(a, n);
    
    // Sap xep giam dan:
    GiamDan(a, n);
    printf("\nThe array sorted in descending: ");
    XuatMang(a, n);
    printf("\n1.Please press any key board to continue\n");
	printf("2.Please press ESC to exit program\n");
	printf ("==============||=============\n");
    key = getch ();
    }while(key != ESC);
    getchar();
	return 0;
}
