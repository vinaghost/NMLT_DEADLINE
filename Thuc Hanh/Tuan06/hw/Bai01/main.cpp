#include "core.h"
int main()
{
	ThongBao(0, "SAP XEP DOI XUNG MANG 1 CHIEU");
	
	MotChieu a;
	NhapMang(a, 1);

	ThongBao(0, "SAP XEP DOI XUNG MANG 1 CHIEU");
	printf("Mang chua sap xep: \n");
	XuatMang(a, 1);

	SapXepDoiXung(a);
	printf("\nMang da duoc sap xep: \n");
	XuatMang(a, 1);

	

	DungManHinh("KET THUC");
	return 0;
}