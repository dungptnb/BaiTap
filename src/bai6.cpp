// bai6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include "stdio.h"
#include "string.h"
#include "ctype.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char a[100];
	int i;

	printf("Chuong trinh chuan hoa xau\n\n");

	while(true){
		printf("Nhap vao 1 chuoi:");
		gets_s(a);
		_strlwr(a);
		while(a[0]==' '){
			strcpy(&a[0], &a[1]);
		}
		for(i=0; i<strlen(a); i++){
			if(a[i]== ' ' && a[i+1]==' '){
				strcpy(&a[i], &a[i+1]);
				i--;
			}
			if(a[i+1]== ',' && a[i]==' '){
				strcpy(&a[i], &a[i+1]);
				i--;
			}
			if(a[i+1]== '.' && a[i]==' '){
				strcpy(&a[i], &a[i+1]);
				i--;
			}
		}
		while(a[strlen(a)-1]==' '){
			a[strlen(a)-1]='\0';
		}
		printf("%s\n", a);
	}
	return 0;
	_getch();
}

