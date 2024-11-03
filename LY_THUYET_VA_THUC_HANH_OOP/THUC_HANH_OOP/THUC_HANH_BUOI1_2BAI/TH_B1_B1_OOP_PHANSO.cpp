/*
	Ho Va Ten: Huynh Van Nhan
	Lop: DH22TIN04
	MSSV: 223492
*/
// Bai tap 2: lop phan so
#include <iostream>
#include <algorithm>
using namespace std;
// khai bao lop phan so
class PhanSo {
    private:
        int tu;
        int mau;
    public:
        PhanSo();
        PhanSo(int tu, int mau);
        //
        void Nhap();
        void Xuat();
        //
        void rutGon();
        void UCLN(PhanSo &b);
        //
        PhanSo congPhanSo(PhanSo b);
        PhanSo truPhanSo(PhanSo b);
        PhanSo nhanPhanSo(PhanSo b);
        PhanSo chiaPhanSo(PhanSo b);
        //
        void setTu(int tu);
        void setMau(int mau);
        //
        int getTu();
        int getMau();
};

PhanSo::PhanSo() {
    tu = 0;
    mau = 1;
}

PhanSo::PhanSo(int tu, int mau) {
    this->tu = tu;
    this->mau = mau;
}

void PhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> this->tu;
    cout << "Nhap mau so: ";
    cin >> this->mau;
}

void PhanSo::Xuat() {
    cout << this->tu << "/" << this->mau;
}

void PhanSo::rutGon() {
    int usc = abs(__gcd(abs(this->tu), abs(this->mau)));
    this->tu = this->tu / usc;
    this->mau = this->mau / usc;
}

void PhanSo::UCLN(PhanSo &b) {
    this->rutGon();
    b.rutGon();
    this->tu = this->tu * b.mau;
    b.tu = b.tu * this->mau;
    this->mau = b.mau = this->mau * b.mau;
}

PhanSo PhanSo::congPhanSo(PhanSo b) {
    this->UCLN(b);
    PhanSo c;
    c.tu = this->tu + b.tu;
    c.mau = this->mau;
    c.rutGon();
    return c;
}

PhanSo PhanSo::truPhanSo(PhanSo b) {
    this->UCLN(b);
    PhanSo c;
    c.tu = this->tu - b.tu;
    c.mau = this->mau;
    c.rutGon();
    return c;
}

PhanSo PhanSo::nhanPhanSo(PhanSo b) {
    PhanSo c;
    c.tu = this->tu * b.tu;
    c.mau = this->mau * b.mau;
    c.rutGon();
    return c;
}

PhanSo PhanSo::chiaPhanSo(PhanSo b) {
    PhanSo c;
    c.tu = this->tu * b.mau;
    c.mau = this->mau * b.tu;
    c.rutGon();
    return c;
}

void PhanSo::setTu(int tu) {
    this->tu = tu;
}

void PhanSo::setMau(int mau) {
    this->mau = mau;
}

int PhanSo::getTu() {
    return this->tu;
}

int PhanSo::getMau() {
    return this->mau;
}
// chuong trinh chinh
int main(){
	//
	PhanSo PS1;
    PhanSo PS2(7,8);
 	//
    cout<<"Nhap phan so thu nhat: \n";
    PS1.Nhap();
    //
    cout<<"-------------XUAT-------\n";
    cout<<"Phan so thu nhat: ";
    PS1.Xuat();
    cout<<"\nPhan so thu hai: ";
    PS2.Xuat();
    //
    cout<<"\n\n-------------RUT GON PHAN SO-------\n";
    cout<< "\nPhan so A:";
    PS1.rutGon();
    PS1.Xuat();
    cout<< "\nPhan so B:";
    PS2.rutGon();
    PS2.Xuat();
    //
    cout<<"\n\n-------------CONG HAI PHAN SO-------\n";
    cout<<"Tong phan so: ";
    PhanSo tong = PS1.congPhanSo(PS2);
    tong.Xuat();
    //
    cout<<"\n\n-------------TRU HAI PHAN SO-------\n";
    cout<<"hieu phan so: ";
    PhanSo hieu = PS1.truPhanSo(PS2);
    hieu.Xuat();
    //
    cout<<"\n\n-------------NHAN HAI PHAN SO-------\n";
    cout<<"Tich phan so: ";
    PhanSo tich = PS1.nhanPhanSo(PS2);
    tich.Xuat();
    //
    cout<<"\n\n-------------CHIA HAI PHAN SO-------\n";
    cout<<"Chia phan so: ";
    PhanSo thuong = PS1.chiaPhanSo(PS2);
    thuong.Xuat();
     
    return 0;
}
