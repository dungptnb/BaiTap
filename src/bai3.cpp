// bai3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
	
	float giaMoCua=10000;
	float quangDuong;
	float tongTien;

int _tmain(int argc, _TCHAR* argv[])
{
	printf("\nChuong trinh tinh cuoc taxi. Nhap so m da di  tu ban phim, in ra so tien phai tra.\n");
	while(true){
		do{
			printf("Nhap vao so m da di: ");
			scanf_s("%f", &quangDuong);
			if(quangDuong < 0){
				printf("Ko hop le. Moi nhap lai!\n");
			}
		}while(quangDuong < 0);
		if(quangDuong <= 1000){
			tongTien = giaMoCua;
		}
		else if(quangDuong > 1000 || quangDuong <= 30000){
			tongTien = giaMoCua + ((float)((quangDuong-1000)*1500)/200);
		}
		else if(quangDuong > 30000){
			tongTien = giaMoCua + (float)(((30000-1000)*1500)/200) + (float)(((quangDuong-30000-1000)*8000)/1000);
		}
		printf("\nSo tien phai tra: %0.2f VND\n", tongTien);
	}
	_getch();
}



