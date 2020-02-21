  #include<stdio.h>
  #include<conio.h>
  #define max 100
  #define n 110
  #define N 78
  void checkNumber (int a[], int  m){
  	int sumOfEven = 0;
  	int sumOfOdd = 0;
  	for (int i = 1; i <= m; i++){
  		if (a[i] % 2 == 0){
  			sumOfEven += a[i];
			}
		else {
				sumOfOdd += a[i];
			}
		  }	  
		  printf("sum of even = %d\n", sumOfEven);
		  printf("sum of odd = %d\n", sumOfOdd);
		  printf ("Press any keyboard to continue\n");
		  printf ("Press N/n to exit this program\n");
		  printf ("=================***===============\n");
	}
  void inPutArray (int a[],int m){
    for (int i = 1; i <= m; i++){
        printf("Element[%d]:", i);
        scanf("%d", &a[i]);
    }
	}
  int main (){
  	char key;
  	int a[max];
  	int m;
  	do{
  	printf ("Enter number of element =");
  	scanf ("%d",&m);
  	if (m <= 0 || m >= 11)
  		printf ("*Please input number again\n");
  	else {
  		inPutArray (a,m);
  		checkNumber (a,m);
  		key = getch();
	  }
  	}while (key != N && key != n );
	getchar();
	return 0;
   }

