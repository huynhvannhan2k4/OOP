/*
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
*/
// khai bao thu vien
#include<iostream>
#include <math.h>
using namespace std;

class Diem {
public:
	double x, y, z;
	Diem() : x(0), y(0), z(0) {}
	Diem(double x, double y, double z) : x(x), y(y), z(z) {}
};

istream& operator>>(istream& is, Diem& u) {
	cout << "NHAP gia tri X: ";
	is >> u.x;
	cout << "NHAP gia tri Y: ";
	is >> u.y;
	cout << "NHAP gia tri Z: ";
	is >> u.z;
	return is;
}

ostream& operator<<(ostream& os, const Diem& u) {
	os << "GIA TRI CUA BAN: " << u.x << ", " << u.y << ", " << u.z;
	return os;
}

int main() {
	Diem d1;
	cin >> d1;
	cout << d1;

	return 0;
}

