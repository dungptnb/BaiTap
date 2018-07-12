// bai4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"

int i, j, h;

int _tmain(int argc, _TCHAR* argv[])
{
	printf("\nChuong trinh in ra man hinh tam giac can dac co do cao h, h nhap tu ban phim\n");
	while(true){
		printf("Nhap vao do cao: ");
		scanf_s("%d", &h);
		printf("\n");
		for(i=0; i<h; i++){
			for(j=0; j<h-(i+1); j++){
				printf(" ");
			}
			for(j=0; j<(2*i+1); j++){
				printf("*");
			}
			printf("\n");
		}
	}
	_getch();
}
