#include <iostream>
using namespace std;

int tong(int a, int b);
int tong (int a, int b)
{
	return a+b;
}
int hieu(int a, int b);
int hieu(int a, int b)
{
	return a-b;
}
int tich(int a, int b)
{
	return a*b;
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
if (pheptoan == "-")
	cout << "Hieu ="<<hieu(a,b)<<endl;
else if (pheptoan =="*")
	cout <<"tich="<<tich(a,b)<<endl;
	cin >> phepToan;
if (pheptoan == "+")
	cout<<"Tong ="<<tong(a,b)<<endl;
	system("pause");
	return 0;
}