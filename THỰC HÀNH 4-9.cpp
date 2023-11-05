//Nhập vào số nguyên dương n từ bàn phím.
//Kiểm tra xem n có phải là số chính phương hay không ? (số chính phương là số khi lấy căn bặc 2 có kết quả là nguyên).

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: "; cin >> n;

	float N = sqrt(n);

	if (N - int(N) == 0) //hoặc N*N == n => so chinh phuong
		cout << "Ket qua: n la so chinh phuong";
	else
		cout << "Ket qua: n ko la so chinh phuong";
}