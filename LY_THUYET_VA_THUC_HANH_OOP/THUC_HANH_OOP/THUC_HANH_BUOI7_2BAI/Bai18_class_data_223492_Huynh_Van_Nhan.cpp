/*
	Ho va Ten: Huynh Van Nhan
	MSSV:223492
	Lop:DH22TIN04
*/
// khai bao thu vien
#include<iostream>
using namespace std;
// khai bao class Data
class Data {
// khai bao thuoc tinh
    float x;
// khai bao phuong thuc
public:
	// constructor
    Data(); // HAM KHOI TAO MAC DINH KHONG DOI SO
    Data(float val); // HAM KHOI TAO DAY DU CAC DOI SO
    ~Data(); // HAM HUY
    friend istream& operator>>(istream& in, Data& data); // DINH NGHIA LUONG NHAP (istream) >> CHO DOI TUONG DATA
    friend ostream& operator<<(ostream& out, const Data& data); // DINH NGHIA LUONG XUAT (ostream) << CHO DOI TUONG DATA
    Data operator+(const Data& other); // DINH NGHIA CAC PHEP TOAN CO HAI DOI SO
    Data operator-(const Data& other);
    Data operator*(const Data& other);
    Data operator/(const Data& other);
};


Data::Data() : x(0) {}

Data::Data(float val) : x(val) {}

Data::~Data() {}

istream& operator>>(istream& in, Data& data) {
    cout << "NHAP SO: ";
    in >> data.x;
    return in;
}

ostream& operator<<(ostream& out, const Data& data) {
    out << "SO CUA BAN: " << data.x;
    return out;
}

Data Data::operator+(const Data& other) {
    return Data(this->x + other.x);
}

Data Data::operator-(const Data& other) {
    return Data(this->x - other.x);
}

Data Data::operator*(const Data& other) {
    return Data(this->x * other.x);
}

Data Data::operator/(const Data& other) {
    if (other.x != 0)
        return Data(this->x / other.x);
    else
        cout << "LOI: CHIA CHO 0!" << endl;
}


int main() {
    Data dta1, dta2;
    cin >> dta1;
    cin >> dta2;

    cout << dta1 << endl;
    cout << dta2 << endl;

    Data cong = dta1 + dta2;
    Data tru = dta1 - dta2;
    Data nhan = dta1 * dta2;
    Data chia = dta1 / dta2;

    cout << "TONG: " << cong << endl;
    cout << "HIEU: " << tru << endl;
    cout << "TICH: " << nhan << endl;
    cout << "THUONG: " << chia << endl;

    return 0;
}
