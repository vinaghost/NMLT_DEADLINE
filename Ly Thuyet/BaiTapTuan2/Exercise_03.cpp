//Viết  chương  trình  khai  báo  một  số biến  có  tên  hợp  lệ và  không  hợp  lệ
//(ví  dụ,  int  double    =  0;)
//và chú  thích  tại  dòng  tương  ứng  lỗi  do  trình  biên  dịch  đưa  ra  nếu  có


//VINAGHOST_18CTT2_FIT_KHTN
//12 - 9 - 2018
//Please don't copy my code without permission

int main()
{
	// =========
	int 3a; //error C2059: syntax error: 'user-defined literal'
	int a3;
	// =========
	int double = 3; //error C2632: 'int' followed by 'double' is illegal
					//error C2513: 'int': no variable declared before '='
	int a = 3
	// =========
	int b; float b; //error C2371 : 'b' : redefinition; different basic types
	int b; float c;
	// =========
	int 18120218; //error C2059: syntax error: 'constant'
	int _18120218;
	// =========
	int d[]; //error C2133: 'a': unknown size

	return 0;
}