/*
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
*/
// khai bao thu vien
#include<iostream>
#include <math.h>
using namespace std;
// khai bao class Data
class Diem {
// khai bao thuoc tinh
		double x,y,z;
// khai bao phuong thuc
	public:
		// constructor
		Diem(); // HAM KHOI TAO MAC DINH KHONG DOI SO
		Diem(double ,double, double); // HAM KHOI TAO DAY DU CAC DOI SO
		~Diem(); // HAM HUY
		friend istream& operator>>(istream& is, Diem& u); // DINH NGHIA LUONG NHAP (istream) >> CHO DOI TUONG DATA
		friend ostream& operator<<(ostream& os, const Diem& u); // DINH NGHIA LUONG XUAT (ostream) << CHO DOI TUONG DATA

//	double khoangcach(Diem u);
//	double dientich(Diem u, Diem v);
//	double chuvi(Diem u, Diem v);
};
Diem::Diem() : x(0) ,y(0) ,z(0) {

}

Diem::Diem(double x, double y, double z) : x(x), y(y), z(z) {

}

Diem::~Diem() {
	cout << "\nHAM HUY DUOC GOI ~~~";
}
istream& operator>>(istream& is, Diem& u) {
	cout << "NHAP GIA TRI X: ";
	is >> u.x;
	cout << "NHAP GIA TRI Y: ";
	is >> u.y;
	cout << "NHAP GIA TRI Z: ";
	is >> u.z;
	return is;
}

ostream& operator<<(ostream& os, const Diem& u) {
	os << "GIA TRI CUA BAN: " << u.x << ", " << u.y << ", " << u.z;
	return os;
}

//double khoangcach(Diem u){
//
//}

//Data Data::operator+(const Data& other) {
//    return Data(this->x + other.x);
//}
//
//Data Data::operator-(const Data& other) {
//    return Data(this->x - other.x);
//}
// CHUONG TRINH CHINH
int main() {
	Diem d1, d2, d3;
	cin >> d1;
	cin >> d2;
	cin >> d3;

	cout << d1 << endl;
	cout << d2 << endl;
	cout << d3 << endl;

	return 0;
}
