#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int is_NamNhuan(int year)
{
	return (!(year % 400) || (!(year % 4) && (year % 100)));
}
int SoNgay(int month, int year)
{
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 2:
			return (is_NamNhuan(year) ? 29 : 28);
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
	}

}
int main()
{
	int day, month, year;
	printf("Nhap vao ngay thang nam theo dinh dang dd/mm/yyyy: ");
	scanf("%d/%d/%d", &day, &month, &year);

	// n = next b = before
	int NgayTiepTheo, NgayTruocDo;
	int ThangTiepTheo, ThangTruocDo;
	int NamTiepTheo, NamTruocDo;

	if (day < SoNgay(month, year))
	{
		NgayTiepTheo = day + 1;
		ThangTiepTheo = month;
		NamTiepTheo = year;
	}
	else
	{
		NgayTiepTheo = 1;

		if (month < 12)
		{
			ThangTiepTheo = month + 1;
			NamTiepTheo = year;
		}
		else
		{
			ThangTiepTheo = 1;
			NamTiepTheo = year + 1;
		}
	}
	if (day == 1)
	{
		if (month == 1)
		{
			ThangTruocDo = 12;
			NamTruocDo = year - 1;
		}
		else
		{
			ThangTruocDo = month - 1;
			NamTruocDo = year;
		}

		NgayTruocDo = SoNgay(ThangTruocDo, NamTruocDo);
	}
	else
	{
		NgayTruocDo = day - 1;
		ThangTruocDo = month;
		NamTruocDo = year;
	}


	
	printf("Ngay ban nhap la %d/%d/%d\n", day, month, year);
	printf("Ngay ke tiep la %d/%d/%d \n", NgayTiepTheo, ThangTiepTheo, NamTiepTheo);
	printf("Ngay truoc do la %d/%d/%d \n", NgayTruocDo, ThangTruocDo, NamTruocDo);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
