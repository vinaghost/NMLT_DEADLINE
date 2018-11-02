#include "sinhvien.h"

void NhapSinhVien(SV &input, int stt)
{
	if (stt) printf("Nhap thong tin sinh vien thu %d: \n", stt);
	else printf("Nhap thong tin sinh vien: \n");

	getchar(); //chong troi lenh
	printf("Ho va ten: ");
	scanf("%[^\n]", &input.HoTen);
	printf("Gioi tinh (0 la nu, 1 la nam): ");
	scanf("%d", &input.GioiTinh);
	printf("Lop: ");
	scanf("%d", &input.Lop);
	printf("Diem trung binh mon hoc: ");
	scanf("%lf", &input.DTK);
}

void XuatSinhVien(const SV output, int stt)
{
	if (stt) printf("Thong tin sinh vien thu %d: \n", stt);
	else printf("Thong tin sinh vien: \n");

	printf("Ho va ten: %s\n", output.HoTen);
	printf("Gioi tinh: %s\n",(output.GioiTinh ? "Nam" : "Nu"));
	printf("Lop: %d\n", output.Lop);
	printf("Diem trung binh mon hoc: %lg\n", output.DTK);
} 
void NhapDSSinhVien(DSSV &input)
{
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &input.N);
	for (int i = 0; i < input.N; i++)
	{
		NhapSinhVien(input.arrSV[i], i + 1);
	}
}
void XuatDSSinhVien(DSSV output, int n)
{
	for (int i = 0; i < (n ? n : output.N); i++)
	{
		XuatSinhVien(output.arrSV[i], i + 1);
		printf("=============================\n");
	}
	
}

void HoanVi(SV &a, SV &b)
{
	HoanVi(a.HoTen, b.HoTen);
	HoanVi(a.GioiTinh, b.GioiTinh);
	HoanVi(a.Lop, b.Lop);
	HoanVi(a.DTK, b.DTK);

}

void SapXepDSSinhVien(DSSV &input)
{
	for (int i = 0; i < input.N - 1; i++)
	{
		for (int j = i; j < input.N; j++)
		{
			if (input.arrSV[i].DTK < input.arrSV[j].DTK) HoanVi(input.arrSV[i], input.arrSV[j]);
		}
	}
}