// bai2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "string.h"
#include "conio.h"
	char a[100];
	int ktHoa=0;
	int ktThuong=0;
int main(){
	printf("\nNhap 1 xau tu ban phim, in ra man hinh so ky tu la chu hoa, so ky tu la chu thuong.\n");
	
	do{
		printf("\nNhap vao 1 chuoi: ");
		gets_s(a);
		for(int i=0; i<strlen(a);i++){
			if((a[i]>='A' && a[i]<='Z') && (a[i]!=' ')){
				ktHoa++;
			}
			if((a[i]>='a' && a[i]<='z') && (a[i]!=' ')){
				ktThuong++;
			}
		}
		printf("\nSo ky tu hoa: %d\n", ktHoa);
		printf("\nSo ky tu thuong: %d\n", ktThuong);
	}while(true);
	_getch();
}
