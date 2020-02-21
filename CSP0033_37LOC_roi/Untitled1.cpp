  #include<stdio.h>
  #include<conio.h>
  #define max 10
  #define ESC 27
  #include <cstdlib>
  void nhap(int a[], int n){
    for (int i = 0; i < n; i++)
    {	
        printf("Enter an integer: ");
        scanf("%d", &a[i]);
    }
}  
  void sumNumber (int a[], int n){
  	int sum = 0;
  	for (int i = 0; i < n; i++){
  		sum += a[i];
	  }
	  printf ("Sum = %d\n", sum);
	  printf ("Press any key to continue\n");
	  printf ("Press ESC to exit\n");
	  printf ("========================***==========================\n");
  }
  int main (){
  	  char key;
	  do{
	  int *a;
	  int n;
	  a = (int *)malloc(n * sizeof(int *));
  	  printf ("Dynamic memory allocation\n");
  	  printf ("Number of element s = ");
  	  scanf ("%d", &n);
  	  if (n <= 0){
  	  	printf ("*please input again!!!!\n");
  	  	printf ("Press any key to continue\n");
		}else{
  	  nhap (a,n);
  	  sumNumber (a,n);
  }
  	  key = getch();
  }while (key != ESC);
	  getchar();
	  return 0;
   }

