/*
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
*/
#include<iostream>
#include<math.h>
using namespace std;

class Diem {
    double x,y;
public:
    Diem(double x=0 , double y=0); 
    ~Diem(); // HAM HUY
    friend istream& operator>>(istream& is, Diem& u); // DINH NGHIA LUONG NHAP (istream) >> CHO DOI TUONG DATA
    friend ostream& operator<<(ostream& os, const Diem& u); // DINH NGHIA LUONG XUAT (ostream) << CHO DOI TUONG DATA
//    double khoangcach(Diem  u);
//    double dientich(Diem  u, Diem v);
//    double chuvi(Diem  u, Diem v);
};
Diem::~Diem() {}

istream& operator>>(istream& is, Diem& u) {
    cout << "NHAP DIEM: ";
    is >> u.x;
    return is;
}

ostream& operator<<(ostream& os, const Diem& u) {
    cout << "SO CUA BAN: " << u.x;
    return os;
}


int main() {
    Diem p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    cout << p1 << p2 << p3 <<endl;
    return 0;
}
