/*
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
*/
#include <iostream>
#include <cmath>
using namespace std;

class Diem {
private:
    int x, y;

public:
    // H�m kh?i t?o m?c d?nh kh�ng d?i s?
    Diem() : x(0), y(0) {}

    // H�m kh?i t?o c� d?y d? c�c d?i s?
    Diem(int x, int y) : x(x), y(y) {}

    // H�m h?y
    ~Diem() {}

    // �?nh nghia lu?ng nh?p (istream) cho d?i tu?ng
    friend istream& operator>>(istream& is, Diem& d) {
        is >> d.x >> d.y;
        return is;
    }

    // �?nh nghia lu?ng xu?t (ostream) cho d?i tu?ng
    friend ostream& operator<<(ostream& os, const Diem& d) {
        os << "(" << d.x << ", " << d.y << ")";
        return os;
    }

    // H�m t�nh di?n t�ch c?a tam gi�c du?c t?o th�nh b?i 3 di?m d� cho
    static double tinhDienTich(Diem a, Diem b, Diem c) {
        double ab = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
        double bc = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
        double ca = sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
        double p = (ab + bc + ca) / 2;
        return sqrt(p * (p - ab) * (p - bc) * (p - ca));
    }

    // H�m t�nh chu vi c?a tam gi�c du?c t?o th�nh b?i 3 di?m d� cho
    static double tinhChuVi(Diem a, Diem b, Diem c) {
        double ab = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
        double bc = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
        double ca = sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
        return ab + bc + ca;
    }
};

int main() {
    Diem a, b, c;

    cout << "Nhap vao 3 diem bat ky:\n";
    cin >> a >> b >> c;

    cout << "3 diem vua nhap la: " << a << ", " << b << ", " << c << "\n";

    double dienTich = Diem::tinhDienTich(a, b, c);
    double chuVi = Diem::tinhChuVi(a, b, c);

    cout << "Dien tich cua tam giac duoc tao thanh boi 3 diem da cho la: " << dienTich << "\n";
    cout << "Chu vi cua tam giac duoc tao thanh boi 3 diem da cho la: " << chuVi << "\n";

    return 0;
}

