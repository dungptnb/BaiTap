// bai1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

	int n,a,b,c,tg,dc;
	
int _tmain(int argc, _TCHAR* argv[])
{
	
	printf("\nChuong trinh nhap vao so nguyen co 3 chu so va in ra man hinh theo thu tu giam dan.\n");
	while(true){
		do{
			printf("\nNhap 1 so nguyen co 3 chu so: ");
			scanf_s("%d", &n);
			if((n<100 || n>999)){
				printf("\nKhong hop le\n");
			}
		}while(n<100 || n>999);
	
	a=n/100;
	tg=n-(a*100);
	b=tg/10;
	c=tg-(b*10);
	
	if(a<b){
		dc=a;
		a=b;
		b=dc;
	}
	if(a<c){
		dc=a;
		a=c;
		c=dc;
	}
	if(b<c){
		dc=b;
		b=c;
		c=dc;
	}
	printf("\nCac chu so theo thu tu giam dan la: %d%d%d\n", a, b, c);
	}
}
