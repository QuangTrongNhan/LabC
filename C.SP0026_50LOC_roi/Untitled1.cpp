  #include<stdio.h>
  #include<stdlib.h>
  #include<conio.h>
  #include<math.h>
  #define max 100
  #define ESC 27
  void decimalToBinary (int a[], int n){
  	int i = 0;
  	if(n < 0){
  		printf ("*Please enter again!!");
	  }
  	if (n == 0){
  			printf ("The binary number is: %d\n",n);
		  }
		  else{
  	while (n > 0){
  		a[i] = n % 2; // in ra bang 1 mang j
  		n = n/2;
  		i++;
  	}
  		printf ("The binary number is: ");
  	}
	  for (int j = i - 1 ;j >= 0; j--) 
	  	printf("%d", a[j]);
	  	printf("\n1.Please press any key board to continue\n");
	  	printf("2.Please press ESC to exit program\n");
	  	printf ("==============||=============\n");
  }
  int main (){
  	char key;
  	do{
  	int n;
  	int a[max];
  	printf ("Convert Decimal to Binary program\n");
  	printf ("Please input decimal number:");
  	scanf ("%d", &n);
  	decimalToBinary(a,n);
  	key = getch ();
}	while (key != ESC);
	  getchar();
	  return 0;
   }

