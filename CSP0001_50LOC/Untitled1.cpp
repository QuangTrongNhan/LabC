#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void hienThi(char s[50][20], int size); // s [so thu tu cua tu][so ki tu toi da cua tu]
//void tachTu(char*);
void tachTu(char* s){
	char result[50][20];
	int i = 0;
	char *p;
	const char *phanTach = " ";
	for(p = strtok(s, phanTach); p != NULL; p = strtok(NULL, phanTach)){
		strcpy(result[i++], p);
	}
	hienThi(result, i); //i la so luong tu da tach dc
}
void hienThi(char s[50][20], int size){
	int i;
	for(i = size-1; i >= 0; i--){
		printf("%s ", s[i]);
	}

}
int main (){
	char s[100];
	printf("Input your string: ");
	fgets(s,100,stdin);
	printf("The original string is: ");
	puts(s);
	printf("The string after reversing is: ");
	tachTu(s);
	fflush(stdin);
	getchar();
	return 0;
}

