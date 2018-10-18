#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	int n;

	printf("Nhap mot bien so xe gom 4 chu so: ");
	scanf("%d", &n);

	int temp = n;
	int dec = 1000;
	int S = 0;
	for (int i = 0; i < 4; i++)
	{
		S += (temp / dec);
		temp %= dec;
		dec /= 10;
	}
	S %= 10;
	printf("Bien so xe %s%d duoc %d nut", (n > 1000) ? "" : "0", n, (S > 1) ? S : 10);


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}