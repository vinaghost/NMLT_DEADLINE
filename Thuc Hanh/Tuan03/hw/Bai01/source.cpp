#include "function.h"

void ThongBao()
{
	Cls;
	Enter;
	TieuDe;
	Enter;
}

void Wait()
{
	Enter;
	Enter;
	printf("Nhan Enter de ket thuc chuong trinh");
	getchar();
	getchar();
}

void MenuMain()
{
	ThongBao();

	printf("1. Phep tinh co ban\n");
	printf("2. Phep tinh luong giac\n");
	printf("3. Phep tinh luy thua\n");
	printf("4. Phep tinh logarit\n");
	printf("5. Phep tinh can\n");
	printf("6. Phep tinh gia tri tuyet doi\n");
	printf("7. Giai phuong trinh bac 2\n");
	printf("8. Giai he phuong trinh bac 1 2 an\n");
	printf("9. Phep tinh co ban voi phan so\n");
	printf("10. Thoat\n");
	printf("Chon chuc nang bang cach lua chon chi so o dau moi lua chon\n");
	printf("Chon: ");
	MenuSelectMain();
}
void MenuError(int MaxItem)
{
	ThongBao();

	printf("Sai chi so.\n");
	printf("Chi co the chon cac chi so tu 1 den %d\n", MaxItem);
	Enter;
	printf("1. Quay ve menu chinh\n");
	printf("2. Thoat\n");
	printf("Chon: ");
	MenuSelectSub();

}
void MenuBack()
{
	Enter;
	Enter;
	printf("1. Quay ve menu chinh\n");
	printf("2. Thoat\n");
	printf("Chon: ");
	MenuSelectSub();
}
void MenuSelectMain()
{
	int item;
	NhapDuLieu(item);

	switch (item)
	{
	case 1:
		ShowPhepTinhCoBan();
		break;
	case 2:
		ShowPhepTinhLuongGiac();
		break;
	case 3:
		ShowLuyThua();
		break;
	case 4:
		ShowLog();
		break;
	case 5:
		ShowCan();
		break;
	case 6: 
		ShowTriTuyetDoi();
		break;
	case 7:
		ShowPhuongTrinhBac2();
		break;
	case 8:
		ShowHePhuongTrinhBacNhat2An();
		break;
	case 9:
		ShowPhepTinhPhanSo();
		break;
	case 10:
		break;
	default:
		MenuError(10);
	}
}
void MenuSelectSub() //dung cho back va error
{
	int item;
	NhapDuLieu(item);

	switch (item)
	{
		case 1:
			MenuMain();
			break;
		case 2:
			break;
		default:
			MenuError(2);
	}
}
void NhapDuLieu(double &a)
{
	scanf("%lf", &a);
}
void NhapDuLieu(int &a)
{
	scanf("%d", &a);
}

void XuatKetQua(int a[])
{
	printf("Dap an la %d/%d", a[TU], a[MAU]);
	MenuBack();
}
void XuatKetQua(double a)
{
	printf("Dap an la %lg", a);
	MenuBack();
}
void XuatKetQua(int Type, int SoNghiem, double x1, double x2 = 0)
{
	switch (SoNghiem)
	{
		case -1:
			printf("%s co vo so nghiem", Loai[Type]);
			break;
		case 0:
			printf("%s vo nghiem", Loai[Type]);
			break;
		case 1:
			if (!Type)
			{
				printf("Phuong trinh co 1 nghiem\n");
				printf("x = %lg", x1);
			}
			else
			{
				printf("He phuong trinh co 1 nghiem\n");
				printf("(x, y) = (%lg, %lg)", x1, x2);
			}
			break;
		case 2:
			printf("Phuong trinh co 1 nghiem");
			printf("x1 = %lg", x1);
			printf("x2 = %lg", x2);
			break;
	}
	MenuBack();
}

double PhepTinhCoBan(CoBan PhepTinh, double a, double b)
{
	switch (PhepTinh)
	{
		case CONG:
			return a + b;
		case TRU:
			return a - b;
		case NHAN:
			return a * b;
		case CHIA:
			return a / b;
	}
	return 0;
}
int PhepTinhCoBan(CoBan PhepTinh, int a, int b)
{
	switch (PhepTinh)
	{
	case CONG:
		return a + b;
	case TRU:
		return a - b;
	case NHAN:
		return a * b;
	case CHIA:
		return a / b;
	}
	return 0;
}
double PhepTinhLuongGiac(LuongGiac PhepTinh, double a)
{
	switch (PhepTinh)
	{
		case SIN:
			return sin(a);
		case COS:
			return cos(a);
		case TAN:
			return tan(a);
		case COT:
			return 1/tan(a);
	}
	return 0;
}
double TriTuyetDoi(double a)
{
	return a > 0 ? a : -a;
}
double LuyThua(double CoSo, double SoMu) //Mu cua so a
{
	return pow(CoSo, SoMu);
}
double Can(double CoSo, double SoMu)
{
	return pow(CoSo, 1 / SoMu);
}
double Log(double CoSo, double n)
{
	return log(CoSo) / log(n);
}
int PhuongTrinhBac1(double a, double b, double &x)
{
	if (a)
	{
		x = -b / a;
		return 1;
	}
	else
	{
		if (b)
			return 0;
		else
			return -1;
	}
}
int PhuongTrinhBac2(double a, double b, double c, double &x1, double &x2)
{
	if (a)
	{
		double Denta;
		Denta = b * b - 4 * a*c;
		if (Denta > 0)
		{
			x1 = (-b + Can(Denta, 2)) / (2 * a);
			x2 = (-b - Can(Denta, 2)) / (2 * a);
			return 2;
		}
		else if (Denta == 0)
		{
			x1 = (-b) / (2 * a);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
		return PhuongTrinhBac1(b, c, x1);
}
int HePhuongTrinhBacNhat2An(double a1, double b1, double c1, double a2, double b2, double c2, double &x, double &y)
{
	double d, dx, dy;

	d = a1 * b2 - a2 * b1;
	dx = c1 * b2 - c2 * b1;
	dy = a1 * c2 - a2 * c1;

	if (d)
	{
		x = dx / d;
		y = dy / d;
		return 1;
	}
	else if (dx)
		return 0;
	else
		return -1;
}
void PhepTinhPhanSo(CoBan PhepTinh, int a[], int b[], int c[])
{
	switch (PhepTinh)
	{
		case CONG:
		case TRU:
			if (a[MAU] != b[MAU])
				QuyDongPhanSo(a, b);
			c[TU] = PhepTinhCoBan(PhepTinh, a[TU], b[TU]);
			c[MAU] = a[MAU];
			break;
		case NHAN:
			c[TU] = a[TU] * b[TU];
			c[MAU] = a[MAU] * b[MAU];
			break;
		case CHIA:
			c[TU] = a[TU] * b[MAU];
			c[MAU] = a[MAU] * b[TU];
			break;
	}

	RutGonPhanSo(c);
	
}


void ShowPhepTinhCoBan()
{
	ThongBao();
	printf("CAC PHEP TINH\n");
	printf("1. Phep cong\n");
	printf("2. Phep tru\n");
	printf("3. Phep nhan\n");
	printf("4. Phep chia\n");
	Enter;
	CoBan PhepTinh;
	printf("Chon phep tinh: ");
	scanf("%d", &PhepTinh);
	while (PhepTinh > 4 || PhepTinh < 1)
	{
		printf("Chon lai phep tinh: ");
		scanf("%d", &PhepTinh);
	}

	ThongBao();
	switch (PhepTinh)
	{
	case CONG:
		printf("a + b = ");
		break;
	case TRU:
		printf("a - b = ");
		break;
	case NHAN:
		printf("a x b = ");
		break;
	case CHIA:
		printf("a : b = ");
		break;
	}
	Enter;
	double a, b;
	printf("Nhap a: ");
	NhapDuLieu(a);
	printf("Nhap b: ");
	NhapDuLieu(b);
	while ((PhepTinh = CHIA) && !b)
	{
		printf("Phep chia nen b phai khac 0");
		printf("Nhap b: ");
		NhapDuLieu(b);
	}
	double KetQua = PhepTinhCoBan(PhepTinh, a, b);

	XuatKetQua(KetQua);

}
void ShowPhepTinhLuongGiac()
{
	ThongBao();
	printf("CAC PHEP TINH LUONG GIAC\n");
	printf("1. Sin\n");
	printf("2. Cos\n");
	printf("3. Tan\n");
	printf("4. Cot\n");
	Enter;
	printf("Chon phep tinh: ");
	Enter;
	LuongGiac PhepTinh;
	printf("Chon phep tinh: ");
	scanf("%d", &PhepTinh);
	while (PhepTinh > 4 || PhepTinh < 1)
	{
		printf("Chon lai phep tinh: ");
		scanf("%d", &PhepTinh);
	}
	ThongBao();
	switch (PhepTinh)
	{
	case SIN:
		printf("Sin(x) = ");
		break;
	case COS:
		printf("Cos(x) = ");
		break;
	case TAN:
		printf("Tan(x) = ");
		break;
	case COT:
		printf("Cot(x) = ");
		break;
	}
	Enter;
	double x;
	printf("Nhap x:");
	NhapDuLieu(x);
	while (!DieuKienLuongGiac(x))
	{
		printf("x phai lon hon -1 va be hon 1\n");
		printf("Nhap x: ");
		NhapDuLieu(x);
	}

	double KetQua = PhepTinhLuongGiac(PhepTinh, x);
	XuatKetQua(x);
}
void ShowTriTuyetDoi()
{
	ThongBao();
	printf(" | x | \n");
	Enter;

	double x;
	printf("Nhap x: ");
	NhapDuLieu(x);

	double KetQua = TriTuyetDoi(x);

	XuatKetQua(KetQua);


}
void ShowLuyThua()
{
	ThongBao();
	printf(" a ^ n \n");
	Enter;

	double a;
	printf("Nhap a: ");
	NhapDuLieu(a);

	double n;
	printf("Nhap n: ");
	NhapDuLieu(n);

	double KetQua = LuyThua(a, n);
	XuatKetQua(KetQua);
}
void ShowCan()
{
	ThongBao();
	printf(" (n)%c(a)\n", 251);
	Enter;

	double n;
	printf("Nhap n: ");
	NhapDuLieu(n);

	double a;
	printf("Nhap a: ");
	NhapDuLieu(a);

	while (!fmod(n, 2) && a < 0)
	{
		printf("So mu chan thi co so a phai > 0\n");
		printf("Nhap a: ");
		NhapDuLieu(a);
	}
	

	double KetQua = Can(a, n);
	XuatKetQua(KetQua);
}
void ShowLog()
{
	ThongBao();
	printf(" log(a)n\n");
	Enter;

	double a;
	printf("Nhap a: ");
	NhapDuLieu(a);

	double n;
	printf("Nhap n: ");
	NhapDuLieu(n);
	while (!DieuKienLog(a, n))
	{
		printf("Co so a phai lon hon 0 va khac 1, n phai lon hon 0\n");
		printf("Nhap a: ");
		NhapDuLieu(a);
		printf("Nhap n: ");
		NhapDuLieu(n);
	}
	double KetQua = Log(a, n);
	XuatKetQua(KetQua);
}
/*void ShowPhuongTrinhBac1()
{
	ThongBao();
	printf(" ax + b = 0\n");
	Enter;

	double a;
	printf("Nhap a: ");
	NhapDuLieu(a);

	double b;
	printf("Nhap b: ");
	NhapDuLieu(b);

	double x;
	int SoNghiem = PhuongTrinhBac1(a, b, x);

	XuatKetQua(PT, SoNghiem, x);
}*/
void ShowPhuongTrinhBac2()
{
	ThongBao();
	printf(" ax^2 + bx + c = 0");
	Enter;

	double a;
	printf("Nhap a: ");
	NhapDuLieu(a);

	double b;
	printf("Nhap b: ");
	NhapDuLieu(b);

	double c;
	printf("Nhap c: ");
	NhapDuLieu(c);

	double x1, x2;
	int SoNghiem = PhuongTrinhBac2(a, b, c, x1, x2);

	XuatKetQua(PT, SoNghiem, x1, x2);
}
void ShowHePhuongTrinhBacNhat2An()
{
	ThongBao();
	printf(" a1 * x + b1 * y = c1\n");
	printf(" a2 * x + b2 * y = c2\n");
	Enter;
	const char name[][3] = { "a1", "b1", "c1", "a2", "b2", "c2" };
	double a[6];
	for (int i = 0; i < 6; i++)
	{
		printf("Nhap %s: ", name[i]);
		NhapDuLieu(a[i]);
	}
	double x, y;
	int SoNghiem = HePhuongTrinhBacNhat2An(a[0], a[1], a[2], a[3], a[4], a[5], x, y);
	XuatKetQua(HPT, SoNghiem, x, y);
}
void ShowPhepTinhPhanSo()
{
	ThongBao();
	printf("CAC PHEP TINH VOI PHAN SO\n");
	printf("1. Phep cong\n");
	printf("2. Phep tru\n");
	printf("3. Phep nhan\n");
	printf("4. Phep chia\n");
	Enter;
	CoBan PhepTinh;
	printf("Chon phep tinh: ");
	scanf("%d", &PhepTinh);
	while (PhepTinh > 4 || PhepTinh < 1)
	{
		printf("Chon lai phep tinh: ");
		scanf("%d", &PhepTinh);
	}
	int a[SIZEPHANSO], b[SIZEPHANSO], c[SIZEPHANSO];
	printf("Nhap tu so cua phan so thu nhat: ");
	NhapDuLieu(a[TU]);
	printf("Nhap mau so cua phan so thu nhat: ");
	NhapDuLieu(a[MAU]);
	while (!a[MAU])
	{
		printf("Mau so phai khac 0\n");
		printf("Nhap LAI mau so cua phan so thu nhat: ");
		NhapDuLieu(a[MAU]);
	}
	printf("Nhap tu so cua phan so thu hai: ");
	NhapDuLieu(b[TU]);
	while ((PhepTinh = CHIA) && !b[TU])
	{
		printf("Tu so phai khac 0 de co the thuc hien phep chia\n");
		printf("Nhap LAI tu so cua phan so thu hai: ");
		NhapDuLieu(b[TU]);
	}
	printf("Nhap mau so cua phan so thu hai: ");
	NhapDuLieu(b[MAU]);
	while (!b[MAU])
	{
		printf("Mau so phai khac 0\n");
		printf("Nhap LAI mau so cua phan so thu hai: ");
		NhapDuLieu(b[MAU]);
	}

	PhepTinhPhanSo(PhepTinh, a, b, c);
	XuatKetQua(c);

}


void QuyDongPhanSo(int a[], int b[])
{
	int temp = BCNN(a[MAU], b[MAU]);
	a[TU] *= (temp / a[MAU]);
	b[TU] *= (temp / b[MAU]);
	a[MAU] = b[MAU] = temp;
}
void RutGonPhanSo(int a[])
{
	int temp = UCLN(a[TU], a[MAU]);
	a[TU] /= temp;
	a[MAU] /= temp;
}

int UCLN(int a, int b)
{
	while (a && b)
	{
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	return (a > b) ? a : b;
}
int BCNN(int a, int b)
{
	return (a * b) / UCLN(a, b);
}

int DieuKienLog(double CoSo, double n)
{
	return (CoSo > 0 && CoSo != 1 && n > 0);
}
int DieuKienLuongGiac(double a)
{
	return (a < 1 && a > -1);
}