#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	for (int i = 1; i < 255; i++)
	{
		if ( i == 9)
			printf("%c%d\n", i, i);
		else
			printf("%c \t%d\n", i, i);
		if (!(i % 16)) printf("\n");
	}


	printf("\n\nCHUONG TRINH KET THUC");
	_getch();
	return 0;
}
