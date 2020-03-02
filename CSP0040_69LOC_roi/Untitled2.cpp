#include<stdio.h>
#include<math.h>
void quaDraTic (){
	float a, b, c, d;
    printf("Nhap vao 3 so a, b, c: \n");
    printf("Nhap vao a: \n",a);
    scanf("%f",&a);
    printf("Nhap vao b: \n",b);
    scanf("%f",&b);
    printf("Nhap vao c: \n",c);
    scanf("%f",&c);
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem!");
                else
                    printf("Phuong trinh vo nghiem!");
            }
        else
            printf("Phuong trinh co nghiem duy nhat la: %f",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("Phuong trinh vo nghiem!!!");
        else if (d==0)
            printf("Phuong trinh co nghiem kep la: %f",-b/(2*a));
        else
            printf("Phuong trinh co 2 nghiem phan biet la: %f,%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
}
}


int bankDeposit (){
	int n;
	float m;
	int b;
	float total;
	printf("input deposits number (a positive number): \n");
	scanf("%d",&n);
	if(n > 0){
		printf("Deposits (a positive number): %d",n);
			
		printf("\ninput deposit interest rates (a positive number <= 0.1): \n"); // lon hon 0 va be hon 0.1
		scanf("%f",&m);
	if(m > 0 && m <= 0.1f){
		printf("\nDeposit interest rates (a positive number <= 0.1): %f",m);
	
		printf("\ninput month: \n");   //lon hon 1 va be hon 12
		scanf("%d",&b);
	if(b >= 1 && b <= 12){
		printf("\nNumber of deposit months (a positive number): %d",b);
		printf("\nTotal amount received = ", total = m*n*b);
		printf("%f",total);
	}
	else{
		printf("error!!!");
	}
	}else{
		printf("error!!!");
	}
	}else{
		printf("error!!!");
	}
	return total = m*n*b;
}


int main (){
	char choice;
	do{
		printf("\n---------MENU---------\n");
		printf("1. Quadratic equation.\n");
		printf("2. Bank deposit problem.\n");
		printf("3. Quit.\n");
		printf("Enter your choice: ");
		scanf("%c",&choice);
		switch(choice){
		case '1': {
				 quaDraTic();
				 break;
		}
		case '2': {
				 bankDeposit();				 				
				 break;
		}
		case '3': break;
		}
	}while(choice != '3');
	getchar();
	return 0;
}

