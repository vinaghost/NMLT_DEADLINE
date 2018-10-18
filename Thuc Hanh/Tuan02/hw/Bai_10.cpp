#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>


#define KM1 15000
#define KM2_5 13500
#define KM6_ 11000
#define DISCOUNT 10


int main()
{
	int km, Tien;

	printf("Nhap so kilomet da di duoc: ");
	scanf("%d", &km);

	if (km < 2)
		Tien = KM1;
	else if (km < 6)
	{
		Tien = KM1;
		Tien += KM2_5 * (km - 1);
	}
	else
	{
		Tien = KM1 + 4 * KM2_5;
		Tien += KM6_ * (km - 5);
	}
	if (km > 120)
		Tien -= Tien / 100 * DISCOUNT;

	printf("So tien la: %d", Tien);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
