// bai8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "conio.h"

char a[100];

int _tmain(int argc, _TCHAR* argv[])
{
	

	printf("\nChuong trinh dao xau. dau vao la 1 xau ky tu bat ky(nhap tu ban phim),in ra man hinh xau da dao nguoc\n");

	while(true){
		printf("Nhap vao 1 xau ky tu: ");
		gets_s(a);
		printf("%s\n", _strrev(a));
	}
	_getch();
}