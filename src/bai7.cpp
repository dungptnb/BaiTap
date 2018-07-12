// bai7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"

int UCLN(int m, int n);
int a;
int b;

int _tmain(int argc, _TCHAR* argv[])
{
	
	printf("\nTim UCLN va BCNN cua 2 so nguyen duong\n");

	while(true){
		printf("Nhap 2 so nguyen duong: ");
		scanf_s("%d %d", &a, &b);
		printf("UCLN: %d\n",UCLN(a, b));
		printf("BCNN: %d\n",(a*b)/(UCLN(a,b)));
	}
	_getch();
}

int UCLN(int a,int b){
	int soDu;
	while(b!=0){
		soDu=a%b;
		a=b;
		b=soDu;
	}
	return a;
}
