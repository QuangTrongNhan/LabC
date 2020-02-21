 #include <stdio.h>
 #include<conio.h>
 #define ESC 27
 #include <cstdlib>
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {	
        printf("Element[%d]: ", i);
        scanf("%d", &a[i]);
    }
} 
void min(int a[], int n)
{	
	int number = 0;
    int min = a[0];
    for (int i = 0; i < n; i++)
        if (min > a[i]){
            min = a[i];
			number = i;     
       }
    printf("The smallest element = %d - its oposite = %d\n", min,number);
    printf("Press any key board to continue\n");
    printf("Press ESC and Enter to exit\n");
    printf ("=========*=========\n");
    
}
int main()
{	
	char key;
	do{
	int *a; // khai báo con tro a de quan li mang dong co n phan tu
    int n; // so luong phan tu
    // cap phat vung nho cho mang dong thong qua con tro quan li
    a = (int *)malloc(n * sizeof(int *));
    printf("\nPlease enter size of array = ");
   	scanf("%d", &n);
    if (n <= 0){
    	printf ("*Please enter again!!\n");
	}else 
	{
    nhap(a,n);
	min (a,n);
}
	key = getch ();
	}
	while (key != ESC); // bang ma ASCII 27 = ESC 
	getchar ();
    return 0;
}
 
